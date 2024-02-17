

#include "light_blue_carpet_block.h"

LightBlueCarpetBlock::LightBlueCarpetBlock() = default;
LightBlueCarpetBlock::~LightBlueCarpetBlock() = default;

short LightBlueCarpetBlock::getId() const {
  return 8610;
}

std::shared_ptr<Block> LightBlueCarpetBlock::clone() const {
  std::shared_ptr<LightBlueCarpetBlock> copy = std::make_shared<LightBlueCarpetBlock>();
  return copy;
}
