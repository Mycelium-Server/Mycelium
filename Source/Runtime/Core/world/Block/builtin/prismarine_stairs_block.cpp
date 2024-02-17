

#include "prismarine_stairs_block.h"

PrismarineStairsBlock::PrismarineStairsBlock() = default;
PrismarineStairsBlock::~PrismarineStairsBlock() = default;

short PrismarineStairsBlock::getId() const {
  return 8345 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PrismarineStairsBlock::clone() const {
  std::shared_ptr<PrismarineStairsBlock> copy = std::make_shared<PrismarineStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
