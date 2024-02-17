

#include "acacia_stairs_block.h"

AcaciaStairsBlock::AcaciaStairsBlock() = default;
AcaciaStairsBlock::~AcaciaStairsBlock() = default;

short AcaciaStairsBlock::getId() const {
  return 8004 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> AcaciaStairsBlock::clone() const {
  std::shared_ptr<AcaciaStairsBlock> copy = std::make_shared<AcaciaStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
