
#include "entity_summon.h"

EntitySummonParser::EntitySummonParser() = default;
EntitySummonParser::~EntitySummonParser() = default;

int EntitySummonParser::getID() const {
  return 40;
}

std::string EntitySummonParser::getIdentifier() const {
  return "minecraft:entity_summon";
}

void EntitySummonParser::writeProperties(ByteBuffer &) const {}
