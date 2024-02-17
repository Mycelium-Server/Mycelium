

#include "red_sandstone_stairs_block.h"

RedSandstoneStairsBlock::RedSandstoneStairsBlock() = default;
RedSandstoneStairsBlock::~RedSandstoneStairsBlock() = default;

short RedSandstoneStairsBlock::getId() const {
  return 8961 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> RedSandstoneStairsBlock::clone() const {
  std::shared_ptr<RedSandstoneStairsBlock> copy = std::make_shared<RedSandstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
