

#include "acacia_leaves_block.h"

AcaciaLeavesBlock::AcaciaLeavesBlock() = default;
AcaciaLeavesBlock::~AcaciaLeavesBlock() = default;

short AcaciaLeavesBlock::getId() const {
  return 318 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> AcaciaLeavesBlock::clone() const {
  std::shared_ptr<AcaciaLeavesBlock> copy = std::make_shared<AcaciaLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
