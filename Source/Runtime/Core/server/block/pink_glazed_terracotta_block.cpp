

#include "pink_glazed_terracotta_block.h"

PinkGlazedTerracottaBlock::PinkGlazedTerracottaBlock() = default;
PinkGlazedTerracottaBlock::~PinkGlazedTerracottaBlock() = default;

short PinkGlazedTerracottaBlock::getId() const {
  return 10279 + facing * 1;
}

std::shared_ptr<Block> PinkGlazedTerracottaBlock::clone() const {
  std::shared_ptr<PinkGlazedTerracottaBlock> copy = std::make_shared<PinkGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
