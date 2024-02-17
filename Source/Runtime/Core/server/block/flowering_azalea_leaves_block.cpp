

#include "flowering_azalea_leaves_block.h"

FloweringAzaleaLeavesBlock::FloweringAzaleaLeavesBlock() = default;
FloweringAzaleaLeavesBlock::~FloweringAzaleaLeavesBlock() = default;

short FloweringAzaleaLeavesBlock::getId() const {
  return 430 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> FloweringAzaleaLeavesBlock::clone() const {
  std::shared_ptr<FloweringAzaleaLeavesBlock> copy = std::make_shared<FloweringAzaleaLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
