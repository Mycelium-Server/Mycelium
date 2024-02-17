

#include "black_glazed_terracotta_block.h"

BlackGlazedTerracottaBlock::BlackGlazedTerracottaBlock() = default;
BlackGlazedTerracottaBlock::~BlackGlazedTerracottaBlock() = default;

short BlackGlazedTerracottaBlock::getId() const {
  return 10315 + facing * 1;
}

std::shared_ptr<Block> BlackGlazedTerracottaBlock::clone() const {
  std::shared_ptr<BlackGlazedTerracottaBlock> copy = std::make_shared<BlackGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
