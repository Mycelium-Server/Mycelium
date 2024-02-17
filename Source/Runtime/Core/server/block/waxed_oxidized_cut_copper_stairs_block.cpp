

#include "waxed_oxidized_cut_copper_stairs_block.h"

WaxedOxidizedCutCopperStairsBlock::WaxedOxidizedCutCopperStairsBlock() = default;
WaxedOxidizedCutCopperStairsBlock::~WaxedOxidizedCutCopperStairsBlock() = default;

short WaxedOxidizedCutCopperStairsBlock::getId() const {
  return 19270 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> WaxedOxidizedCutCopperStairsBlock::clone() const {
  std::shared_ptr<WaxedOxidizedCutCopperStairsBlock> copy = std::make_shared<WaxedOxidizedCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
