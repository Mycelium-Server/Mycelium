

#include "end_stone_brick_stairs_block.h"

EndStoneBrickStairsBlock::EndStoneBrickStairsBlock() = default;
EndStoneBrickStairsBlock::~EndStoneBrickStairsBlock() = default;

short EndStoneBrickStairsBlock::getId() const {
  return 10950 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> EndStoneBrickStairsBlock::clone() const {
  std::shared_ptr<EndStoneBrickStairsBlock> copy = std::make_shared<EndStoneBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
