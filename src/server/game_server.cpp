#include "game_server.h"

std::string GameServer::getMOTD() {
    return "Hello, world!"; // TOOD: Move to properties.yml
}

int GameServer::getOnline() {
    return 0; // TODO: Move to properties.yml
}

int GameServer::getMaxPlayers() {
    return 20; // TODO: Move to properties.yml
}