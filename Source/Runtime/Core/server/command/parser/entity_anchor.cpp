
#include "entity_anchor.h"

EntityAnchorParser::EntityAnchorParser() = default;
EntityAnchorParser::~EntityAnchorParser() = default;

int EntityAnchorParser::getID() const {
  return 36;
}

std::string EntityAnchorParser::getIdentifier() const {
  return "minecraft:entity_anchor";
}

void EntityAnchorParser::writeProperties(ByteBuffer &) const {}