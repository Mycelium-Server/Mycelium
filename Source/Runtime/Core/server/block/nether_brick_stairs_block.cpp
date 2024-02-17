

#include "nether_brick_stairs_block.h"

NetherBrickStairsBlock::NetherBrickStairsBlock() = default;
NetherBrickStairsBlock::~NetherBrickStairsBlock() = default;

short NetherBrickStairsBlock::getId() const {
  return 5635 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> NetherBrickStairsBlock::clone() const {
  std::shared_ptr<NetherBrickStairsBlock> copy = std::make_shared<NetherBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
