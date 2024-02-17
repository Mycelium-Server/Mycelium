

#include "smooth_sandstone_stairs_block.h"

SmoothSandstoneStairsBlock::SmoothSandstoneStairsBlock() = default;
SmoothSandstoneStairsBlock::~SmoothSandstoneStairsBlock() = default;

short SmoothSandstoneStairsBlock::getId() const {
  return 11110 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SmoothSandstoneStairsBlock::clone() const {
  std::shared_ptr<SmoothSandstoneStairsBlock> copy = std::make_shared<SmoothSandstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
