

#include "light_gray_terracotta_block.h"

LightGrayTerracottaBlock::LightGrayTerracottaBlock() = default;
LightGrayTerracottaBlock::~LightGrayTerracottaBlock() = default;

short LightGrayTerracottaBlock::getId() const {
  return 7484;
}

std::shared_ptr<Block> LightGrayTerracottaBlock::clone() const {
  std::shared_ptr<LightGrayTerracottaBlock> copy = std::make_shared<LightGrayTerracottaBlock>();
  return copy;
}
