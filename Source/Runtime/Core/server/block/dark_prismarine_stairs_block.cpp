

#include "dark_prismarine_stairs_block.h"

DarkPrismarineStairsBlock::DarkPrismarineStairsBlock() = default;
DarkPrismarineStairsBlock::~DarkPrismarineStairsBlock() = default;

short DarkPrismarineStairsBlock::getId() const {
  return 8505 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> DarkPrismarineStairsBlock::clone() const {
  std::shared_ptr<DarkPrismarineStairsBlock> copy = std::make_shared<DarkPrismarineStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
