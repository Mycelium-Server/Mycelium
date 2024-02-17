

#include "purpur_stairs_block.h"

PurpurStairsBlock::PurpurStairsBlock() = default;
PurpurStairsBlock::~PurpurStairsBlock() = default;

short PurpurStairsBlock::getId() const {
  return 10019 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PurpurStairsBlock::clone() const {
  std::shared_ptr<PurpurStairsBlock> copy = std::make_shared<PurpurStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
