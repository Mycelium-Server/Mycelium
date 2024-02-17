

#include "exposed_cut_copper_stairs_block.h"

ExposedCutCopperStairsBlock::ExposedCutCopperStairsBlock() = default;
ExposedCutCopperStairsBlock::~ExposedCutCopperStairsBlock() = default;

short ExposedCutCopperStairsBlock::getId() const {
  return 19078 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> ExposedCutCopperStairsBlock::clone() const {
  std::shared_ptr<ExposedCutCopperStairsBlock> copy = std::make_shared<ExposedCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
