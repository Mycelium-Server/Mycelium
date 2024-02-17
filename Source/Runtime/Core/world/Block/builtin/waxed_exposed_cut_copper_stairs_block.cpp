

#include "waxed_exposed_cut_copper_stairs_block.h"

WaxedExposedCutCopperStairsBlock::WaxedExposedCutCopperStairsBlock() = default;
WaxedExposedCutCopperStairsBlock::~WaxedExposedCutCopperStairsBlock() = default;

short WaxedExposedCutCopperStairsBlock::getId() const {
  return 19430 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WaxedExposedCutCopperStairsBlock::clone() const {
  std::shared_ptr<WaxedExposedCutCopperStairsBlock> copy = std::make_shared<WaxedExposedCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
