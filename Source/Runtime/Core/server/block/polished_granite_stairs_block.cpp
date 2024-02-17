

#include "polished_granite_stairs_block.h"

PolishedGraniteStairsBlock::PolishedGraniteStairsBlock() = default;
PolishedGraniteStairsBlock::~PolishedGraniteStairsBlock() = default;

short PolishedGraniteStairsBlock::getId() const {
  return 10550 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> PolishedGraniteStairsBlock::clone() const {
  std::shared_ptr<PolishedGraniteStairsBlock> copy = std::make_shared<PolishedGraniteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
