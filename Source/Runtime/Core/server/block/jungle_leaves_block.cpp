

#include "jungle_leaves_block.h"

JungleLeavesBlock::JungleLeavesBlock() = default;
JungleLeavesBlock::~JungleLeavesBlock() = default;

short JungleLeavesBlock::getId() const {
  return 290 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> JungleLeavesBlock::clone() const {
  std::shared_ptr<JungleLeavesBlock> copy = std::make_shared<JungleLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
