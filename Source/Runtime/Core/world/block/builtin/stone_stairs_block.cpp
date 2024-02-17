

#include "stone_stairs_block.h"

StoneStairsBlock::StoneStairsBlock() = default;
StoneStairsBlock::~StoneStairsBlock() = default;

short StoneStairsBlock::getId() const {
  return 11030 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> StoneStairsBlock::clone() const {
  std::shared_ptr<StoneStairsBlock> copy = std::make_shared<StoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
