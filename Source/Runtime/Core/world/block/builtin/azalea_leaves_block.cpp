

#include "azalea_leaves_block.h"

AzaleaLeavesBlock::AzaleaLeavesBlock() = default;
AzaleaLeavesBlock::~AzaleaLeavesBlock() = default;

short AzaleaLeavesBlock::getId() const {
  return 402 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> AzaleaLeavesBlock::clone() const {
  std::shared_ptr<AzaleaLeavesBlock> copy = std::make_shared<AzaleaLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
