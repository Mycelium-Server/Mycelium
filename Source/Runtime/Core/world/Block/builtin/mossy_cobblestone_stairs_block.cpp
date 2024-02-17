

#include "mossy_cobblestone_stairs_block.h"

MossyCobblestoneStairsBlock::MossyCobblestoneStairsBlock() = default;
MossyCobblestoneStairsBlock::~MossyCobblestoneStairsBlock() = default;

short MossyCobblestoneStairsBlock::getId() const {
  return 10870 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> MossyCobblestoneStairsBlock::clone() const {
  std::shared_ptr<MossyCobblestoneStairsBlock> copy = std::make_shared<MossyCobblestoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
