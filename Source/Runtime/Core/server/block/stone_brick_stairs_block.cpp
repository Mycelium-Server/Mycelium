

#include "stone_brick_stairs_block.h"

StoneBrickStairsBlock::StoneBrickStairsBlock() = default;
StoneBrickStairsBlock::~StoneBrickStairsBlock() = default;

short StoneBrickStairsBlock::getId() const {
  return 5439 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> StoneBrickStairsBlock::clone() const {
  std::shared_ptr<StoneBrickStairsBlock> copy = std::make_shared<StoneBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
