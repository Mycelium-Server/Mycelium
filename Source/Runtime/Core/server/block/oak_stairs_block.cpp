

#include "oak_stairs_block.h"

OakStairsBlock::OakStairsBlock() = default;
OakStairsBlock::~OakStairsBlock() = default;

short OakStairsBlock::getId() const {
  return 2208 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> OakStairsBlock::clone() const {
  std::shared_ptr<OakStairsBlock> copy = std::make_shared<OakStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
