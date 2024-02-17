

#include "light_blue_wool_block.h"

LightBlueWoolBlock::LightBlueWoolBlock() = default;
LightBlueWoolBlock::~LightBlueWoolBlock() = default;

short LightBlueWoolBlock::getId() const {
  return 1641;
}

std::shared_ptr<Block> LightBlueWoolBlock::clone() const {
  std::shared_ptr<LightBlueWoolBlock> copy = std::make_shared<LightBlueWoolBlock>();
  return copy;
}
