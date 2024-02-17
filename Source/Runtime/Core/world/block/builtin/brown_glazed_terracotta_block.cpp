

#include "brown_glazed_terracotta_block.h"

BrownGlazedTerracottaBlock::BrownGlazedTerracottaBlock() = default;
BrownGlazedTerracottaBlock::~BrownGlazedTerracottaBlock() = default;

short BrownGlazedTerracottaBlock::getId() const {
  return 10303 + facing * 1;
}

std::shared_ptr<Block> BrownGlazedTerracottaBlock::clone() const {
  std::shared_ptr<BrownGlazedTerracottaBlock> copy = std::make_shared<BrownGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
