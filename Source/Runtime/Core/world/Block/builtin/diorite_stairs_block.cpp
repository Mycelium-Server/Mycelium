

#include "diorite_stairs_block.h"

DioriteStairsBlock::DioriteStairsBlock() = default;
DioriteStairsBlock::~DioriteStairsBlock() = default;

short DioriteStairsBlock::getId() const {
  return 11590 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> DioriteStairsBlock::clone() const {
  std::shared_ptr<DioriteStairsBlock> copy = std::make_shared<DioriteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
