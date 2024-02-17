

#include "purple_terracotta_block.h"

PurpleTerracottaBlock::PurpleTerracottaBlock() = default;
PurpleTerracottaBlock::~PurpleTerracottaBlock() = default;

short PurpleTerracottaBlock::getId() const {
  return 7486;
}

std::shared_ptr<Block> PurpleTerracottaBlock::clone() const {
  std::shared_ptr<PurpleTerracottaBlock> copy = std::make_shared<PurpleTerracottaBlock>();
  return copy;
}
