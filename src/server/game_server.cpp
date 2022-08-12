/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "game_server.h"

#include <fstream>
#include <ryml.hpp>
#include <ryml_std.hpp>

#include "../event_loop_factory.h"
#include "../protocol/clientbound_player_info.h"
#include "../protocol/clientbound_remove_entities.h"
#include "../protocol/clientbound_spawn_player.h"

GameServer::GameServer() {
  decompressor = libdeflate_alloc_decompressor();
  reloadConfig();
}

void GameServer::generateKeypair() {
  keypair = rsa_create_keypair();
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

void GameServer::addPlayer(PlayerData* data) {
  if (!players.empty()) {
    auto* current = new ClientboundPlayerInfo();
    current->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*data, {}));// TODO: Mojang API

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
    other->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*player, {}));// TODO: Mojang API
  }
  other->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*data, {}));// TODO: Mojang API

  data->entity->connection->write(other);
  delete other;

  auto* spawnOther = new ClientboundSpawnPlayer();
  for (auto& player: players) {// TODO: `This packet is sent by the server when a player comes into visible range, not when a player joins.`
    spawnOther->data = *player;
    data->entity->connection->write(spawnOther);
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

std::vector<PlayerData*>& GameServer::getPlayers() {
  return players;
}

WorldBorder GameServer::getWorldBorder() const {
  return cfg_worldBorder;
}

RotatedProtocolPosition GameServer::getSpawnPosition() {
  return {{0, 10, 0}, 0.f};// TODO: properties.yml
}

bool GameServer::debugPackets() const {
  return cfg_debugPackets;
}

int GameServer::maxConnectionThreads() const {
  return cfg_maxConnectionThreads;
}

libdeflate_compressor* GameServer::getCompressor() const {
  return compressor;
}

libdeflate_decompressor* GameServer::getDecompressor() const {
  return decompressor;
}

#define SET_IF_EXIST(dst, path) \
  if (tree path.has_val()) {    \
    root path >> dst;           \
  } else {                      \
    root path << dst;           \
  }

#define CHECK_RANGE(value, min, max) \
  assert((value) >= (min));          \
  assert((value) <= (max));

void GameServer::reloadConfig() {
  std::ifstream configIn("properties.yml");
  std::stringstream ss;
  ss << configIn.rdbuf();
  configIn.close();
  std::string config = ss.str();
  char* configStr = (char*) config.c_str();

  ryml::Tree tree = ryml::parse_in_place(ryml::to_substr(configStr));
  ryml::NodeRef root = tree.rootref();

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

  std::ofstream configOut("properties.yml", std::ios::out | std::ios::binary | std::ios::trunc);
  configOut << tree;
  configOut.close();

  if (compressor) {
    libdeflate_free_compressor(compressor);
  }
  compressor = libdeflate_alloc_compressor(cfg_compressionLevel);
}
