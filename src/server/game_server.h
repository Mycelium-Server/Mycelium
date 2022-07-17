#pragma once

#include "../encryption.h"
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

private:
    KeyPairRSA keypair;

};