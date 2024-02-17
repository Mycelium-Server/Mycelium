

#include "mangrove_leaves_block.h"

MangroveLeavesBlock::MangroveLeavesBlock() = default;
MangroveLeavesBlock::~MangroveLeavesBlock() = default;

short MangroveLeavesBlock::getId() const {
  return 374 + waterlogged * 1 + persistent * 2 + distance * 4;
}

std::shared_ptr<Block> MangroveLeavesBlock::clone() const {
  std::shared_ptr<MangroveLeavesBlock> copy = std::make_shared<MangroveLeavesBlock>();
  copy->distance = distance;
  copy->persistent = persistent;
  copy->waterlogged = waterlogged;
  return copy;
}
