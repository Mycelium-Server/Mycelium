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

#pragma once

#include <libdeflate.h>

#include <string>
#include <thread>

#include "../encryption.h"
#include "command/command.h"
#include "command/command_node.h"
#include "command/root_command_node.h"
#include "difficulty.h"
#include "player_data.h"
#include "world/world_border.h"

class GameServer {
 public:
  GameServer();
  ~GameServer();

 public:
  void reloadConfig();

 public:
  void generateKeypair();
  void registerCommand(const std::string&, Command*);

  [[nodiscard]] std::string getMOTD() const;
  [[nodiscard]] int getOnline() const;
  [[nodiscard]] int getMaxPlayers() const;
  [[nodiscard]] std::string getServerIP() const;
  [[nodiscard]] int getServerPort() const;
  // void* getFavicon(); // TODO: Implement this
  [[nodiscard]] int getCompressionThreshold() const;
  [[nodiscard]] int getCompressionLevel() const;
  KeyPairRSA getRSAKeyPair();
  [[nodiscard]] CommandGraph* getCommandGraph() const;
  [[nodiscard]] RootCommandNode* getRootCommandNode() const;
  [[nodiscard]] std::unordered_map<std::string, Command*>& getCommands();
  [[nodiscard]] bool isOnlineMode() const;
  [[nodiscard]] bool isHardcore() const;
  [[nodiscard]] int getViewDistance() const;
  [[nodiscard]] int getSimulationDistance() const;
  [[nodiscard]] bool showReducedDebugInfo() const;
  [[nodiscard]] bool showRespawnScreen() const;
  [[nodiscard]] Difficulty getDifficulty() const;
  [[nodiscard]] WorldBorder getWorldBorder() const;
  [[nodiscard]] bool debugPackets() const;
  [[nodiscard]] uint32_t maxConnectionThreads() const;
  [[nodiscard]] EntityPosition getSpawnPosition();

  void disconnectRaw(PlayerData*, const std::string&);
  void disconnectJson(PlayerData*, const nlohmann::json&);
  void disconnect(PlayerData*);

  void addPlayer(PlayerData*);
  void removePlayer(PlayerData*);
  std::vector<PlayerData*>& getPlayers();
  [[nodiscard]] PlayerData* getPlayer(const std::string&) const;

  [[nodiscard]] libdeflate_compressor* getCompressor() const;
  [[nodiscard]] libdeflate_decompressor* getDecompressor() const;

 private:
  CommandGraph* commandGraph;
  RootCommandNode* rootCommandNode;
  std::unordered_map<std::string, Command*> commands;
  KeyPairRSA keypair {};
  std::vector<PlayerData*> players;
  libdeflate_compressor* compressor = nullptr;
  libdeflate_decompressor* decompressor = nullptr;

 private:
  std::string cfg_serverIP = "0.0.0.0";
  int cfg_serverPort = 25565;
  std::string cfg_motd = "Hello, world!";
  int cfg_maxPlayers = 20;
  int cfg_compressionThreshold = 256;
  int cfg_compressionLevel = 6;
  bool cfg_onlineMode = false;
  bool cfg_hardcore = false;
  int cfg_viewDistance = 20;
  int cfg_simulationDistance = 20;
  bool cfg_reducedDebugInfo = false;
  bool cfg_showRespawnScreen = true;
  int cfg_difficulty = (int) Difficulty::NORMAL;
  bool cfg_debugPackets = false;
  uint32_t cfg_maxConnectionThreads;
  WorldBorder cfg_worldBorder = {0, 0, 29999984, 29999984, 0, 0};
};