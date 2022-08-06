#pragma once

#include <string>

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
  WorldBorder cfg_worldBorder = {0, 0, 29999984, 29999984, 0, 0};
};