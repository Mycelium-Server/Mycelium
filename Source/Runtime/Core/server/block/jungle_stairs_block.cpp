

#include "jungle_stairs_block.h"

JungleStairsBlock::JungleStairsBlock() = default;
JungleStairsBlock::~JungleStairsBlock() = default;

short JungleStairsBlock::getId() const {
  return 6156 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> JungleStairsBlock::clone() const {
  std::shared_ptr<JungleStairsBlock> copy = std::make_shared<JungleStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
