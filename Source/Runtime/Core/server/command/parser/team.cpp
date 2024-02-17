
#include "team.h"

TeamParser::TeamParser() = default;
TeamParser::~TeamParser() = default;

int TeamParser::getID() const {
  return 31;
}

std::string TeamParser::getIdentifier() const {
  return "minecraft:team";
}

void TeamParser::writeProperties(ByteBuffer &) const {}