

#include "light_gray_glazed_terracotta_block.h"

LightGrayGlazedTerracottaBlock::LightGrayGlazedTerracottaBlock() = default;
LightGrayGlazedTerracottaBlock::~LightGrayGlazedTerracottaBlock() = default;

short LightGrayGlazedTerracottaBlock::getId() const {
  return 10287 + facing * 1;
}

std::shared_ptr<Block> LightGrayGlazedTerracottaBlock::clone() const {
  std::shared_ptr<LightGrayGlazedTerracottaBlock> copy = std::make_shared<LightGrayGlazedTerracottaBlock>();
  copy->facing = facing;
  return copy;
}
