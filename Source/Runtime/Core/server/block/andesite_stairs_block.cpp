

#include "andesite_stairs_block.h"

AndesiteStairsBlock::AndesiteStairsBlock() = default;
AndesiteStairsBlock::~AndesiteStairsBlock() = default;

short AndesiteStairsBlock::getId() const {
  return 11350 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> AndesiteStairsBlock::clone() const {
  std::shared_ptr<AndesiteStairsBlock> copy = std::make_shared<AndesiteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
