

#include "light_blue_terracotta_block.h"

LightBlueTerracottaBlock::LightBlueTerracottaBlock() = default;
LightBlueTerracottaBlock::~LightBlueTerracottaBlock() = default;

short LightBlueTerracottaBlock::getId() const {
  return 7479;
}

std::shared_ptr<Block> LightBlueTerracottaBlock::clone() const {
  std::shared_ptr<LightBlueTerracottaBlock> copy = std::make_shared<LightBlueTerracottaBlock>();
  return copy;
}
