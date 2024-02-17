

#include "brick_stairs_block.h"

BrickStairsBlock::BrickStairsBlock() = default;
BrickStairsBlock::~BrickStairsBlock() = default;

short BrickStairsBlock::getId() const {
  return 5359 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> BrickStairsBlock::clone() const {
  std::shared_ptr<BrickStairsBlock> copy = std::make_shared<BrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
