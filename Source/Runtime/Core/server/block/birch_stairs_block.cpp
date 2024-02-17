

#include "birch_stairs_block.h"

BirchStairsBlock::BirchStairsBlock() = default;
BirchStairsBlock::~BirchStairsBlock() = default;

short BirchStairsBlock::getId() const {
  return 6076 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> BirchStairsBlock::clone() const {
  std::shared_ptr<BirchStairsBlock> copy = std::make_shared<BirchStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
