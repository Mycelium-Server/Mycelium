#pragma once

#include <iostream>

class GameServer {
public:
    std::string getMOTD();
    int getOnline();
    int getMaxPlayers();
    // void* getFavicon(); // TODO: Implement this

};