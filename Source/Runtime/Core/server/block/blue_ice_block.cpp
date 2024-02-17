

#include "blue_ice_block.h"

BlueIceBlock::BlueIceBlock() = default;
BlueIceBlock::~BlueIceBlock() = default;

short BlueIceBlock::getId() const {
  return 10529;
}

std::shared_ptr<Block> BlueIceBlock::clone() const {
  std::shared_ptr<BlueIceBlock> copy = std::make_shared<BlueIceBlock>();
  return copy;
}
