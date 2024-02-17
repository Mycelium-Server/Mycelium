

#include "smooth_quartz_stairs_block.h"

SmoothQuartzStairsBlock::SmoothQuartzStairsBlock() = default;
SmoothQuartzStairsBlock::~SmoothQuartzStairsBlock() = default;

short SmoothQuartzStairsBlock::getId() const {
  return 11190 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SmoothQuartzStairsBlock::clone() const {
  std::shared_ptr<SmoothQuartzStairsBlock> copy = std::make_shared<SmoothQuartzStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
