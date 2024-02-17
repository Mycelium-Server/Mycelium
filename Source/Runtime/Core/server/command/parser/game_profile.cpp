
#include "game_profile.h"

GameProfileParser::GameProfileParser() = default;
GameProfileParser::~GameProfileParser() = default;

int GameProfileParser::getID() const {
  return 7;
}

std::string GameProfileParser::getIdentifier() const {
  return "minecraft:game_profile";
}

void GameProfileParser::writeProperties(ByteBuffer &) const {}