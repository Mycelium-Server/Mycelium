

#include "polished_blackstone_stairs_block.h"

PolishedBlackstoneStairsBlock::PolishedBlackstoneStairsBlock() = default;
PolishedBlackstoneStairsBlock::~PolishedBlackstoneStairsBlock() = default;

short PolishedBlackstoneStairsBlock::getId() const {
  return 17874 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedBlackstoneStairsBlock::clone() const {
  std::shared_ptr<PolishedBlackstoneStairsBlock> copy = std::make_shared<PolishedBlackstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
