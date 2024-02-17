

#include "cobbled_deepslate_stairs_block.h"

CobbledDeepslateStairsBlock::CobbledDeepslateStairsBlock() = default;
CobbledDeepslateStairsBlock::~CobbledDeepslateStairsBlock() = default;

short CobbledDeepslateStairsBlock::getId() const {
  return 19782 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> CobbledDeepslateStairsBlock::clone() const {
  std::shared_ptr<CobbledDeepslateStairsBlock> copy = std::make_shared<CobbledDeepslateStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
