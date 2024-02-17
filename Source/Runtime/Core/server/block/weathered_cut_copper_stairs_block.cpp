

#include "weathered_cut_copper_stairs_block.h"

WeatheredCutCopperStairsBlock::WeatheredCutCopperStairsBlock() = default;
WeatheredCutCopperStairsBlock::~WeatheredCutCopperStairsBlock() = default;

short WeatheredCutCopperStairsBlock::getId() const {
  return 18998 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WeatheredCutCopperStairsBlock::clone() const {
  std::shared_ptr<WeatheredCutCopperStairsBlock> copy = std::make_shared<WeatheredCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
