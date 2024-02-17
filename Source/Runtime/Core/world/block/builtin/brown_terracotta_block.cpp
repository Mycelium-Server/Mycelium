

#include "brown_terracotta_block.h"

BrownTerracottaBlock::BrownTerracottaBlock() = default;
BrownTerracottaBlock::~BrownTerracottaBlock() = default;

short BrownTerracottaBlock::getId() const {
  return 7488;
}

std::shared_ptr<Block> BrownTerracottaBlock::clone() const {
  std::shared_ptr<BrownTerracottaBlock> copy = std::make_shared<BrownTerracottaBlock>();
  return copy;
}
