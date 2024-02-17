

#include "mangrove_stairs_block.h"

MangroveStairsBlock::MangroveStairsBlock() = default;
MangroveStairsBlock::~MangroveStairsBlock() = default;

short MangroveStairsBlock::getId() const {
  return 8164 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> MangroveStairsBlock::clone() const {
  std::shared_ptr<MangroveStairsBlock> copy = std::make_shared<MangroveStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
