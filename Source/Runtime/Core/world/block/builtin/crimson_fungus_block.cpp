

#include "crimson_fungus_block.h"

CrimsonFungusBlock::CrimsonFungusBlock() = default;
CrimsonFungusBlock::~CrimsonFungusBlock() = default;

short CrimsonFungusBlock::getId() const {
  return 16197;
}

std::shared_ptr<Block> CrimsonFungusBlock::clone() const {
  std::shared_ptr<CrimsonFungusBlock> copy = std::make_shared<CrimsonFungusBlock>();
  return copy;
}
