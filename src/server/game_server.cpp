#include "game_server.h"
#include "../protocol/clientbound_player_info.h"

GameServer::GameServer() {
    keypair = rsa_create_keypair();
}

std::string GameServer::getMOTD() {
    return "Hello, world!"; // TODO: Move to properties.yml
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

Difficulty GameServer::getDifficulty() {
    return Difficulty::PEACEFUL; // TODO: Move to properties.yml
}

void GameServer::addPlayer(PlayerData* data) {
    if (!players.empty()) {
        auto *current = new ClientboundPlayerInfo();
        current->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*data, {})); // TODO: Mojang API

        for (auto& player : players) {
            player->entity->connection->write(current);
        }

        delete current;
    }

    players.push_back(data);

    auto* other = new ClientboundPlayerInfo();
    for(auto& player : players) {
        other->playerActions.push_back(new ClientboundPlayerInfo::AddPlayerAction(*player, {})); // TODO: Mojang API
    }

    data->entity->connection->write(other);
    delete other;
}

void GameServer::removePlayer(PlayerData* data) {
    auto it = std::find(players.begin(), players.end(), data);
    if (it != players.end()) {
        auto* packet = new ClientboundPlayerInfo();
        packet->playerActions.push_back(new ClientboundPlayerInfo::RemovePlayerAction(*data));
        for (auto& player : players) {
            player->entity->connection->write(packet);
        }
        delete packet;
        players.erase(it);
    }
}

std::vector<PlayerData*>& GameServer::getPlayers() {
    return players;
}

WorldBorder GameServer::getWorldBorder() {
    return { 0, 0, 29999984, 29999984, 0, 0 }; // TODO: properties.yml
}

RotatedProtocolPosition GameServer::getSpawnPosition() {
    return { { 0, 10, 0 }, 0.f }; // TODO: properties.yml
}
