

#include "smooth_red_sandstone_stairs_block.h"

SmoothRedSandstoneStairsBlock::SmoothRedSandstoneStairsBlock() = default;
SmoothRedSandstoneStairsBlock::~SmoothRedSandstoneStairsBlock() = default;

short SmoothRedSandstoneStairsBlock::getId() const {
  return 10630 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SmoothRedSandstoneStairsBlock::clone() const {
  std::shared_ptr<SmoothRedSandstoneStairsBlock> copy = std::make_shared<SmoothRedSandstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
