

#include "white_terracotta_block.h"

WhiteTerracottaBlock::WhiteTerracottaBlock() = default;
WhiteTerracottaBlock::~WhiteTerracottaBlock() = default;

short WhiteTerracottaBlock::getId() const {
  return 7476;
}

std::shared_ptr<Block> WhiteTerracottaBlock::clone() const {
  std::shared_ptr<WhiteTerracottaBlock> copy = std::make_shared<WhiteTerracottaBlock>();
  return copy;
}
