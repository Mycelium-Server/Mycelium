

#include "black_terracotta_block.h"

BlackTerracottaBlock::BlackTerracottaBlock() = default;
BlackTerracottaBlock::~BlackTerracottaBlock() = default;

short BlackTerracottaBlock::getId() const {
  return 7491;
}

std::shared_ptr<Block> BlackTerracottaBlock::clone() const {
  std::shared_ptr<BlackTerracottaBlock> copy = std::make_shared<BlackTerracottaBlock>();
  return copy;
}
