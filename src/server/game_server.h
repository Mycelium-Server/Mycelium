#pragma once

#include "../encryption.h"
#include "difficulty.h"
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

private:
    KeyPairRSA keypair;

};