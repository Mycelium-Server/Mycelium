

#include "waxed_weathered_cut_copper_stairs_block.h"

WaxedWeatheredCutCopperStairsBlock::WaxedWeatheredCutCopperStairsBlock() = default;
WaxedWeatheredCutCopperStairsBlock::~WaxedWeatheredCutCopperStairsBlock() = default;

short WaxedWeatheredCutCopperStairsBlock::getId() const {
  return 19350 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WaxedWeatheredCutCopperStairsBlock::clone() const {
  std::shared_ptr<WaxedWeatheredCutCopperStairsBlock> copy = std::make_shared<WaxedWeatheredCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
