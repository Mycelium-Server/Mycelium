

#include "quartz_stairs_block.h"

QuartzStairsBlock::QuartzStairsBlock() = default;
QuartzStairsBlock::~QuartzStairsBlock() = default;

short QuartzStairsBlock::getId() const {
  return 7360 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> QuartzStairsBlock::clone() const {
  std::shared_ptr<QuartzStairsBlock> copy = std::make_shared<QuartzStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
