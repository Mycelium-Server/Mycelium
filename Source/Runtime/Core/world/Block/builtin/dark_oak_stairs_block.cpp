

#include "dark_oak_stairs_block.h"

DarkOakStairsBlock::DarkOakStairsBlock() = default;
DarkOakStairsBlock::~DarkOakStairsBlock() = default;

short DarkOakStairsBlock::getId() const {
  return 8084 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> DarkOakStairsBlock::clone() const {
  std::shared_ptr<DarkOakStairsBlock> copy = std::make_shared<DarkOakStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
