

#include "lime_terracotta_block.h"

LimeTerracottaBlock::LimeTerracottaBlock() = default;
LimeTerracottaBlock::~LimeTerracottaBlock() = default;

short LimeTerracottaBlock::getId() const {
  return 7481;
}

std::shared_ptr<Block> LimeTerracottaBlock::clone() const {
  std::shared_ptr<LimeTerracottaBlock> copy = std::make_shared<LimeTerracottaBlock>();
  return copy;
}
