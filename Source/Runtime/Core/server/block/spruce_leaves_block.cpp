

#include "spruce_leaves_block.h"

SpruceLeavesBlock::SpruceLeavesBlock() = default;
SpruceLeavesBlock::~SpruceLeavesBlock() = default;

short SpruceLeavesBlock::getId() const {
  return 234 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> SpruceLeavesBlock::clone() const {
  std::shared_ptr<SpruceLeavesBlock> copy = std::make_shared<SpruceLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
