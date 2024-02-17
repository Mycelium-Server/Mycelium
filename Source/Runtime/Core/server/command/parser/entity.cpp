
#include "entity.h"

EntityParser::EntityParser() = default;
EntityParser::~EntityParser() = default;

int EntityParser::getID() const {
  return 6;
}

std::string EntityParser::getIdentifier() const {
  return "minecraft:entity";
}

void EntityParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((uint8_t) onlySingleEntity) |
                ((uint8_t) allowOnlyPlayers) << 1);
}
