

#include "crimson_stairs_block.h"

CrimsonStairsBlock::CrimsonStairsBlock() = default;
CrimsonStairsBlock::~CrimsonStairsBlock() = default;

short CrimsonStairsBlock::getId() const {
  return 16528 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> CrimsonStairsBlock::clone() const {
  std::shared_ptr<CrimsonStairsBlock> copy = std::make_shared<CrimsonStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
