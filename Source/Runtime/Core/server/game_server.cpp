
#include "game_server.h"

#include <fstream>
#include <ryml.hpp>
#include <ryml_std.hpp>

#include "../event_loop_factory.h"
#include "../protocol/clientbound_disconnect.h"
#include "../protocol/clientbound_player_info.h"
#include "../protocol/clientbound_remove_entities.h"
#include "../protocol/clientbound_set_equipment.h"
#include "../protocol/clientbound_spawn_player.h"
#include "command/command_graph.h"

GameServer::GameServer() {
  cfg_maxConnectionThreads = std::thread::hardware_concurrency();
  if (cfg_maxConnectionThreads == 0) {
    cfg_maxConnectionThreads = 512;
  }

  rootCommandNode = new RootCommandNode();
  commandGraph = new CommandGraph();
  commandGraph->addNode(rootCommandNode);

  decompressor = libdeflate_alloc_decompressor();
  reloadConfig();
}

GameServer::~GameServer() {
  if (compressor) {
    libdeflate_free_compressor(compressor);
  }
  libdeflate_free_decompressor(decompressor);

  delete commandGraph;
  delete rootCommandNode;
}

void GameServer::generateKeypair() {
  keypair = rsa_create_keypair();
}

void GameServer::registerCommand(const std::string& name, Command* command) {
  command->addToGraph(commandGraph, rootCommandNode);
  commands[name] = command;
}

std::string GameServer::getServerIP() const {
  return cfg_serverIP;
}

int GameServer::getServerPort() const {
  return cfg_serverPort;
}

std::string GameServer::getMOTD() const {
  return cfg_motd;
}

int GameServer::getOnline() const {
  return (int) players.size();
}

int GameServer::getMaxPlayers() const {
  return cfg_maxPlayers;
}

int GameServer::getCompressionThreshold() const {
  return cfg_compressionThreshold;
}

int GameServer::getCompressionLevel() const {
  return cfg_compressionLevel;
}

KeyPairRSA GameServer::getRSAKeyPair() {
  return keypair;
}

bool GameServer::isOnlineMode() const {
  return cfg_onlineMode;
}

bool GameServer::isHardcore() const {
  return cfg_hardcore;
}

int GameServer::getViewDistance() const {
  return cfg_viewDistance;
}

int GameServer::getSimulationDistance() const {
  return cfg_simulationDistance;
}

bool GameServer::showReducedDebugInfo() const {
  return cfg_reducedDebugInfo;
}

bool GameServer::showRespawnScreen() const {
  return cfg_showRespawnScreen;// TODO: Gamerules
}

Difficulty GameServer::getDifficulty() const {
  return (Difficulty) cfg_difficulty;
}

void GameServer::disconnectRaw(PlayerData* player, const std::string& message) {
  auto* disconnect = new ClientboundDisconnect;
  disconnect->reason = message;
  player->entity->connection->write(disconnect);
  delete disconnect;

  removePlayer(player);
}

void GameServer::disconnectJson(PlayerData* player, const nlohmann::json& message) {
  disconnectRaw(player, nlohmann::to_string(message));
}

void GameServer::disconnect(PlayerData* player) {
  disconnectRaw(player, R"({"text":"Disconnected."})");
}

void GameServer::addPlayer(PlayerData* data) {
  if (!players.empty()) {
    auto* current = new ClientboundPlayerInfo();
    current->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*data));

    auto* spawnPlayer = new ClientboundSpawnPlayer();
    spawnPlayer->data = *data;

    for (auto& player: players) {
      player->entity->connection->write(current);
      player->entity->connection->write(spawnPlayer);
    }

    delete current;
    delete spawnPlayer;
  }


  auto* other = new ClientboundPlayerInfo();
  for (auto& player: players) {
    other->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*player));
  }
  other->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*data));

  data->entity->connection->write(other);
  delete other;

  auto* spawnOther = new ClientboundSpawnPlayer();
  for (auto& player: players) {// TODO: `This packet is sent by the server when a player comes into visible range, not when a player joins.`
    spawnOther->data = *player;
    data->entity->connection->write(spawnOther);

    auto* equipment = new ClientboundSetEquipment;
    equipment->addAll(player->entity);
    data->entity->connection->write(equipment);
    delete equipment;
  }
  delete spawnOther;

  players.push_back(data);
}

void GameServer::removePlayer(PlayerData* data) {
  auto it = std::find(players.begin(), players.end(), data);
  if (it != players.end()) {
    players.erase(it);

    auto* destroyEntity = new ClientboundRemoveEntities();
    destroyEntity->entities.push_back(data->entity);

    auto* packet = new ClientboundPlayerInfo();
    packet->playerActions.push_back(new ClientboundPlayerInfo::RemovePlayerAction(*data));

    for (auto& player: players) {
      player->entity->connection->write(destroyEntity);
      player->entity->connection->write(packet);
    }

    delete packet;
    delete destroyEntity;
  }
}

PlayerData* GameServer::getPlayer(const std::string& name) const {
  for (auto* player: players) {
    if (player->name == name) {
      return player;
    }
  }
  return nullptr;
}

std::vector<PlayerData*>& GameServer::getPlayers() {
  return players;
}

WorldBorder GameServer::getWorldBorder() const {
  return cfg_worldBorder;
}

EntityPosition GameServer::getSpawnPosition() {
  return {0, 100, 0};// TODO: properties.yml
}

bool GameServer::debugPackets() const {
  return cfg_debugPackets;
}

uint32_t GameServer::maxConnectionThreads() const {
  return cfg_maxConnectionThreads;
}

libdeflate_compressor* GameServer::getCompressor() const {
  return compressor;
}

libdeflate_decompressor* GameServer::getDecompressor() const {
  return decompressor;
}

CommandGraph* GameServer::getCommandGraph() const {
  return commandGraph;
}

RootCommandNode* GameServer::getRootCommandNode() const {
  return rootCommandNode;
}

std::unordered_map<std::string, Command*>& GameServer::getCommands() {
  return commands;
}

void GameServer::reloadConfig() {
  std::ifstream configIn("properties.yml");
  std::stringstream ss;
  ss << configIn.rdbuf();
  configIn.close();
  std::string config = ss.str();

  ryml::Tree tree = ryml::parse_in_arena(ryml::to_csubstr(config));
  ryml::NodeRef root = tree.rootref();

  ryml::NodeRef node;

#define SET_IF_EXIST(dst, path)                            \
  node = tree path;                                        \
  if (node.valid() && !node.is_seed() && node.has_val()) { \
    node >> dst;                                           \
  } else {                                                 \
    node << dst;                                           \
  }

#define CHECK_RANGE(value, min, max)                       \
  if ((value) < (min) || (value) > (max)) {                \
    std::cerr << "Unexpected value " << #value << ": "     \
              << value << ", expected value in the range " \
              << min << " to " << max << "." << std::endl; \
    exit(-1);                                              \
  }

  root |= ryml::MAP;
  SET_IF_EXIST(cfg_serverIP, ["serverIP"])
  SET_IF_EXIST(cfg_serverPort, ["serverPort"])
  SET_IF_EXIST(cfg_motd, ["motd"])
  SET_IF_EXIST(cfg_maxPlayers, ["maxPlayers"])
  SET_IF_EXIST(cfg_compressionThreshold, ["compressionThreshold"])
  SET_IF_EXIST(cfg_compressionLevel, ["compressionLevel"])
  CHECK_RANGE(cfg_compressionLevel, 0, 12)
  SET_IF_EXIST(cfg_onlineMode, ["onlineMode"])
  SET_IF_EXIST(cfg_hardcore, ["hardcore"])
  SET_IF_EXIST(cfg_viewDistance, ["viewDistance"])
  CHECK_RANGE(cfg_viewDistance, 2, 32)
  SET_IF_EXIST(cfg_simulationDistance, ["simulationDistance"])
  CHECK_RANGE(cfg_simulationDistance, 2, 32)
  SET_IF_EXIST(cfg_reducedDebugInfo, ["reducedDebugInfo"])
  SET_IF_EXIST(cfg_showRespawnScreen, ["showRespawnScreen"])
  SET_IF_EXIST(cfg_difficulty, ["difficulty"])
  root["worldBorder"] |= ryml::MAP;
  SET_IF_EXIST(cfg_worldBorder.x, ["worldBorder"]["x"])
  SET_IF_EXIST(cfg_worldBorder.y, ["worldBorder"]["y"])
  SET_IF_EXIST(cfg_worldBorder.diameter, ["worldBorder"]["diameter"])
  SET_IF_EXIST(cfg_worldBorder.portalTeleportBoundary, ["worldBorder"]["portalTeleportBoundary"])
  SET_IF_EXIST(cfg_worldBorder.warningBlocks, ["worldBorder"]["warningBlocks"])
  SET_IF_EXIST(cfg_worldBorder.warningTime, ["worldBorder"]["warningTime"])
  SET_IF_EXIST(cfg_debugPackets, ["debugPackets"])
  SET_IF_EXIST(cfg_maxConnectionThreads, ["maxConnectionThreads"])
  CHECK_RANGE(cfg_maxConnectionThreads, 1, UINT32_MAX)
  if (cfg_maxConnectionThreads != EventLoopFactory::getMaxThreadCount()) {
    EventLoopFactory::init(cfg_maxConnectionThreads);
  }

#undef SET_IF_EXIST
#undef CHECK_RANGE

  std::ofstream configOut("properties.yml", std::ios::out | std::ios::binary | std::ios::trunc);
  configOut << tree;
  configOut.close();

  if (compressor) {
    libdeflate_free_compressor(compressor);
  }
  compressor = libdeflate_alloc_compressor(cfg_compressionLevel);
}
