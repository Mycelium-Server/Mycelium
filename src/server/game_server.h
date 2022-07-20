#pragma once

#include "world/world_border.h"
#include "../encryption.h"
#include "difficulty.h"
#include "player_data.h"
#include <string>

class GameServer {
public:
    GameServer();

public:
    std::string getMOTD();
    int getOnline();
    int getMaxPlayers();
    // void* getFavicon(); // TODO: Implement this
    int getCompressionThreshold();
    KeyPairRSA getRSAKeyPair();
    bool isOnlineMode();
    bool isHardcore();
    int getViewDistance();
    int getSimulationDistance();
    bool showReducedDebugInfo();
    bool showRespawnScreen();
    Difficulty getDifficulty();
    WorldBorder getWorldBorder();
    RotatedProtocolPosition getSpawnPosition();

    void addPlayer(PlayerData*);
    void removePlayer(PlayerData*);
    std::vector<PlayerData*>& getPlayers();

private:
    KeyPairRSA keypair;
    std::vector<PlayerData*> players;

};