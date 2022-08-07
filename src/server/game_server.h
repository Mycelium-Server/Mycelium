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

#include <string>
#include <thread>

#include "../encryption.h"
#include "difficulty.h"
#include "player_data.h"
#include "world/world_border.h"

class GameServer {
 public:
  GameServer();

 public:
  void reloadConfig();

 public:
  void generateKeypair();
  [[nodiscard]] std::string getMOTD() const;
  [[nodiscard]] int getOnline() const;
  [[nodiscard]] int getMaxPlayers() const;
  [[nodiscard]] std::string getServerIP() const;
  [[nodiscard]] int getServerPort() const;
  // void* getFavicon(); // TODO: Implement this
  [[nodiscard]] int getCompressionThreshold() const;
  KeyPairRSA getRSAKeyPair();
  [[nodiscard]] bool isOnlineMode() const;
  [[nodiscard]] bool isHardcore() const;
  [[nodiscard]] int getViewDistance() const;
  [[nodiscard]] int getSimulationDistance() const;
  [[nodiscard]] bool showReducedDebugInfo() const;
  [[nodiscard]] bool showRespawnScreen() const;
  [[nodiscard]] Difficulty getDifficulty() const;
  [[nodiscard]] WorldBorder getWorldBorder() const;
  [[nodiscard]] bool debugPackets() const;
  [[nodiscard]] int maxConnectionThreads() const;
  RotatedProtocolPosition getSpawnPosition();

  void addPlayer(PlayerData*);
  void removePlayer(PlayerData*);
  std::vector<PlayerData*>& getPlayers();

 private:
  KeyPairRSA keypair {};
  std::vector<PlayerData*> players;

 private:
  std::string cfg_serverIP = "0.0.0.0";
  int cfg_serverPort = 25565;
  std::string cfg_motd = "Hello, world!";
  int cfg_maxPlayers = 20;
  int cfg_compressionThreshold = 256;
  bool cfg_onlineMode = false;
  bool cfg_hardcore = false;
  int cfg_viewDistance = 20;
  int cfg_simulationDistance = 20;
  bool cfg_reducedDebugInfo = false;
  bool cfg_showRespawnScreen = true;
  int cfg_difficulty = (int) Difficulty::NORMAL;
  bool cfg_debugPackets = false;
  unsigned int cfg_maxConnectionThreads = std::min(1u, std::thread::hardware_concurrency());
  WorldBorder cfg_worldBorder = {0, 0, 29999984, 29999984, 0, 0};
};