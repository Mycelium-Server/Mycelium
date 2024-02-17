

#include "orange_terracotta_block.h"

OrangeTerracottaBlock::OrangeTerracottaBlock() = default;
OrangeTerracottaBlock::~OrangeTerracottaBlock() = default;

short OrangeTerracottaBlock::getId() const {
  return 7477;
}

std::shared_ptr<Block> OrangeTerracottaBlock::clone() const {
  std::shared_ptr<OrangeTerracottaBlock> copy = std::make_shared<OrangeTerracottaBlock>();
  return copy;
}
