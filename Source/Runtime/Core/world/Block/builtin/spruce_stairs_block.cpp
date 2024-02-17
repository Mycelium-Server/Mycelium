

#include "spruce_stairs_block.h"

SpruceStairsBlock::SpruceStairsBlock() = default;
SpruceStairsBlock::~SpruceStairsBlock() = default;

short SpruceStairsBlock::getId() const {
  return 5996 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> SpruceStairsBlock::clone() const {
  std::shared_ptr<SpruceStairsBlock> copy = std::make_shared<SpruceStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
