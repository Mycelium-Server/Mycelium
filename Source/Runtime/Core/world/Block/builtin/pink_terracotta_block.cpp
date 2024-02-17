

#include "pink_terracotta_block.h"

PinkTerracottaBlock::PinkTerracottaBlock() = default;
PinkTerracottaBlock::~PinkTerracottaBlock() = default;

short PinkTerracottaBlock::getId() const {
  return 7482;
}

std::shared_ptr<Block> PinkTerracottaBlock::clone() const {
  std::shared_ptr<PinkTerracottaBlock> copy = std::make_shared<PinkTerracottaBlock>();
  return copy;
}
