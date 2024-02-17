

#include "crimson_hyphae_block.h"

CrimsonHyphaeBlock::CrimsonHyphaeBlock() = default;
CrimsonHyphaeBlock::~CrimsonHyphaeBlock() = default;

short CrimsonHyphaeBlock::getId() const {
  return 16190 + axis * 1;
}

std::shared_ptr<Block> CrimsonHyphaeBlock::clone() const {
  std::shared_ptr<CrimsonHyphaeBlock> copy = std::make_shared<CrimsonHyphaeBlock>();
  copy->axis = axis;
  return copy;
}
