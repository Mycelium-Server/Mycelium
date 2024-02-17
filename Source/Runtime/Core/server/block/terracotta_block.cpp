

#include "terracotta_block.h"

TerracottaBlock::TerracottaBlock() = default;
TerracottaBlock::~TerracottaBlock() = default;

short TerracottaBlock::getId() const {
  return 8623;
}

std::shared_ptr<Block> TerracottaBlock::clone() const {
  std::shared_ptr<TerracottaBlock> copy = std::make_shared<TerracottaBlock>();
  return copy;
}
