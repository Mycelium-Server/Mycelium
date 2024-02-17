

#include "waxed_cut_copper_stairs_block.h"

WaxedCutCopperStairsBlock::WaxedCutCopperStairsBlock() = default;
WaxedCutCopperStairsBlock::~WaxedCutCopperStairsBlock() = default;

short WaxedCutCopperStairsBlock::getId() const {
  return 19510 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WaxedCutCopperStairsBlock::clone() const {
  std::shared_ptr<WaxedCutCopperStairsBlock> copy = std::make_shared<WaxedCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
