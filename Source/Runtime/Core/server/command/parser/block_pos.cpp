
#include "block_pos.h"

BlockPosParser::BlockPosParser() = default;
BlockPosParser::~BlockPosParser() = default;

int BlockPosParser::getID() const {
  return 8;
}

std::string BlockPosParser::getIdentifier() const {
  return "minecraft:block_pos";
}

void BlockPosParser::writeProperties(ByteBuffer &) const {}
