

#include "blue_terracotta_block.h"

BlueTerracottaBlock::BlueTerracottaBlock() = default;
BlueTerracottaBlock::~BlueTerracottaBlock() = default;

short BlueTerracottaBlock::getId() const {
  return 7487;
}

std::shared_ptr<Block> BlueTerracottaBlock::clone() const {
  std::shared_ptr<BlueTerracottaBlock> copy = std::make_shared<BlueTerracottaBlock>();
  return copy;
}
