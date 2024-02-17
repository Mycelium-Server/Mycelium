

#include "polished_diorite_stairs_block.h"

PolishedDioriteStairsBlock::PolishedDioriteStairsBlock() = default;
PolishedDioriteStairsBlock::~PolishedDioriteStairsBlock() = default;

short PolishedDioriteStairsBlock::getId() const {
  return 10790 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedDioriteStairsBlock::clone() const {
  std::shared_ptr<PolishedDioriteStairsBlock> copy = std::make_shared<PolishedDioriteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
