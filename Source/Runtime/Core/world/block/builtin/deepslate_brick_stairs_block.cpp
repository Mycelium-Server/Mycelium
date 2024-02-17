

#include "deepslate_brick_stairs_block.h"

DeepslateBrickStairsBlock::DeepslateBrickStairsBlock() = default;
DeepslateBrickStairsBlock::~DeepslateBrickStairsBlock() = default;

short DeepslateBrickStairsBlock::getId() const {
  return 21015 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> DeepslateBrickStairsBlock::clone() const {
  std::shared_ptr<DeepslateBrickStairsBlock> copy = std::make_shared<DeepslateBrickStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
