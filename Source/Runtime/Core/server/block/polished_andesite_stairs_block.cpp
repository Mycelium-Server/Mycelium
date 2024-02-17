

#include "polished_andesite_stairs_block.h"

PolishedAndesiteStairsBlock::PolishedAndesiteStairsBlock() = default;
PolishedAndesiteStairsBlock::~PolishedAndesiteStairsBlock() = default;

short PolishedAndesiteStairsBlock::getId() const {
  return 11510 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedAndesiteStairsBlock::clone() const {
  std::shared_ptr<PolishedAndesiteStairsBlock> copy = std::make_shared<PolishedAndesiteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
