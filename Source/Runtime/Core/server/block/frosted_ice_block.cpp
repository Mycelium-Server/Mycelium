

#include "frosted_ice_block.h"

FrostedIceBlock::FrostedIceBlock() = default;
FrostedIceBlock::~FrostedIceBlock() = default;

short FrostedIceBlock::getId() const {
  return 10130 + age * 1;
}

std::shared_ptr<Block> FrostedIceBlock::clone() const {
  std::shared_ptr<FrostedIceBlock> copy = std::make_shared<FrostedIceBlock>();
  copy->age = age;
  return copy;
}
