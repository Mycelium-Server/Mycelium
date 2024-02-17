
#include "block_state.h"

BlockStateParser::BlockStateParser() = default;
BlockStateParser::~BlockStateParser() = default;

int BlockStateParser::getID() const {
  return 12;
}

std::string BlockStateParser::getIdentifier() const {
  return "minecraft:block_state";
}

void BlockStateParser::writeProperties(ByteBuffer &) const {}
