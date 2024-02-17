

#include "red_nether_brick_stairs_block.h"

RedNetherBrickStairsBlock::RedNetherBrickStairsBlock() = default;
RedNetherBrickStairsBlock::~RedNetherBrickStairsBlock() = default;

short RedNetherBrickStairsBlock::getId() const {
  return 11430 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> RedNetherBrickStairsBlock::clone() const {
  std::shared_ptr<RedNetherBrickStairsBlock> copy = std::make_shared<RedNetherBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
