

#include "stripped_crimson_hyphae_block.h"

StrippedCrimsonHyphaeBlock::StrippedCrimsonHyphaeBlock() = default;
StrippedCrimsonHyphaeBlock::~StrippedCrimsonHyphaeBlock() = default;

short StrippedCrimsonHyphaeBlock::getId() const {
  return 16193 + axis * 1;
}

std::shared_ptr<Block> StrippedCrimsonHyphaeBlock::clone() const {
  std::shared_ptr<StrippedCrimsonHyphaeBlock> copy = std::make_shared<StrippedCrimsonHyphaeBlock>();
  copy->axis = axis;
  return copy;
}
