

#include "blackstone_stairs_block.h"

BlackstoneStairsBlock::BlackstoneStairsBlock() = default;
BlackstoneStairsBlock::~BlackstoneStairsBlock() = default;

short BlackstoneStairsBlock::getId() const {
  return 17049 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> BlackstoneStairsBlock::clone() const {
  std::shared_ptr<BlackstoneStairsBlock> copy = std::make_shared<BlackstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
