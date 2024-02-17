

#include "warped_stairs_block.h"

WarpedStairsBlock::WarpedStairsBlock() = default;
WarpedStairsBlock::~WarpedStairsBlock() = default;

short WarpedStairsBlock::getId() const {
  return 16608 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WarpedStairsBlock::clone() const {
  std::shared_ptr<WarpedStairsBlock> copy = std::make_shared<WarpedStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
