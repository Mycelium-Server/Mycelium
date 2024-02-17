

#include "flowering_azalea_block.h"

FloweringAzaleaBlock::FloweringAzaleaBlock() = default;
FloweringAzaleaBlock::~FloweringAzaleaBlock() = default;

short FloweringAzaleaBlock::getId() const {
  return 19715;
}

std::shared_ptr<Block> FloweringAzaleaBlock::clone() const {
  std::shared_ptr<FloweringAzaleaBlock> copy = std::make_shared<FloweringAzaleaBlock>();
  return copy;
}
