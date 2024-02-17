

#include "gray_terracotta_block.h"

GrayTerracottaBlock::GrayTerracottaBlock() = default;
GrayTerracottaBlock::~GrayTerracottaBlock() = default;

short GrayTerracottaBlock::getId() const {
  return 7483;
}

std::shared_ptr<Block> GrayTerracottaBlock::clone() const {
  std::shared_ptr<GrayTerracottaBlock> copy = std::make_shared<GrayTerracottaBlock>();
  return copy;
}
