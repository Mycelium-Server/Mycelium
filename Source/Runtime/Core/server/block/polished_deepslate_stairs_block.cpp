

#include "polished_deepslate_stairs_block.h"

PolishedDeepslateStairsBlock::PolishedDeepslateStairsBlock() = default;
PolishedDeepslateStairsBlock::~PolishedDeepslateStairsBlock() = default;

short PolishedDeepslateStairsBlock::getId() const {
  return 20193 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedDeepslateStairsBlock::clone() const {
  std::shared_ptr<PolishedDeepslateStairsBlock> copy = std::make_shared<PolishedDeepslateStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
