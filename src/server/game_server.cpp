#include "game_server.h"

GameServer::GameServer() {
    keypair = rsa_create_keypair();
}

std::string GameServer::getMOTD() {
    return "Hello, world!"; // TOOD: Move to properties.yml
}

int GameServer::getOnline() {
    return 0;
}

int GameServer::getMaxPlayers() {
    return 20; // TODO: Move to properties.yml
}

int GameServer::getCompressionThreshold() {
    return 256; // TODO: Move to properties.yml
}

KeyPairRSA GameServer::getRSAKeyPair() {
    return keypair;
}

bool GameServer::isOnlineMode() {
    return false; // TODO: Move to properties.yml
}

bool GameServer::isHardcore() {
    return false; // TODO: Move to properties.yml
}

int GameServer::getViewDistance() {
    return 20; //TODO: Move to properties.yml
}

int GameServer::getSimulationDistance() {
    return 20; // TODO: Move to properties.yml
}

bool GameServer::showReducedDebugInfo() {
    return false; // TODO: Move to properties.yml
}

bool GameServer::showRespawnScreen() {
    return true; // TODO: Move to properties.yml, gamerules
}