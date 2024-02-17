

#include "lime_glazed_terracotta_block.h"

LimeGlazedTerracottaBlock::LimeGlazedTerracottaBlock() = default;
LimeGlazedTerracottaBlock::~LimeGlazedTerracottaBlock() = default;

short LimeGlazedTerracottaBlock::getId() const {
  return 10275 + facing * 1;
}

std::shared_ptr<Block> LimeGlazedTerracottaBlock::clone() const {
  std::shared_ptr<LimeGlazedTerracottaBlock> copy = std::make_shared<LimeGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
