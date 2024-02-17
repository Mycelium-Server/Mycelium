

#include "green_terracotta_block.h"

GreenTerracottaBlock::GreenTerracottaBlock() = default;
GreenTerracottaBlock::~GreenTerracottaBlock() = default;

short GreenTerracottaBlock::getId() const {
  return 7489;
}

std::shared_ptr<Block> GreenTerracottaBlock::clone() const {
  std::shared_ptr<GreenTerracottaBlock> copy = std::make_shared<GreenTerracottaBlock>();
  return copy;
}
