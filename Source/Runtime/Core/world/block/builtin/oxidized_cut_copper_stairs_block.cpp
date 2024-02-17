

#include "oxidized_cut_copper_stairs_block.h"

OxidizedCutCopperStairsBlock::OxidizedCutCopperStairsBlock() = default;
OxidizedCutCopperStairsBlock::~OxidizedCutCopperStairsBlock() = default;

short OxidizedCutCopperStairsBlock::getId() const {
  return 18918 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> OxidizedCutCopperStairsBlock::clone() const {
  std::shared_ptr<OxidizedCutCopperStairsBlock> copy = std::make_shared<OxidizedCutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
