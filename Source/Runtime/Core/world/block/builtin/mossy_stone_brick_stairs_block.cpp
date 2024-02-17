

#include "mossy_stone_brick_stairs_block.h"

MossyStoneBrickStairsBlock::MossyStoneBrickStairsBlock() = default;
MossyStoneBrickStairsBlock::~MossyStoneBrickStairsBlock() = default;

short MossyStoneBrickStairsBlock::getId() const {
  return 10710 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> MossyStoneBrickStairsBlock::clone() const {
  std::shared_ptr<MossyStoneBrickStairsBlock> copy = std::make_shared<MossyStoneBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
