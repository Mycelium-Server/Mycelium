

#include "blue_wool_block.h"

BlueWoolBlock::BlueWoolBlock() = default;
BlueWoolBlock::~BlueWoolBlock() = default;

short BlueWoolBlock::getId() const {
  return 1649;
}

std::shared_ptr<Block> BlueWoolBlock::clone() const {
  std::shared_ptr<BlueWoolBlock> copy = std::make_shared<BlueWoolBlock>();
  return copy;
}
