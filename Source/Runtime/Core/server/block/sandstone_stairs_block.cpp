

#include "sandstone_stairs_block.h"

SandstoneStairsBlock::SandstoneStairsBlock() = default;
SandstoneStairsBlock::~SandstoneStairsBlock() = default;

short SandstoneStairsBlock::getId() const {
  return 5761 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SandstoneStairsBlock::clone() const {
  std::shared_ptr<SandstoneStairsBlock> copy = std::make_shared<SandstoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
