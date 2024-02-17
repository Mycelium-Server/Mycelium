

#include "cut_copper_stairs_block.h"

CutCopperStairsBlock::CutCopperStairsBlock() = default;
CutCopperStairsBlock::~CutCopperStairsBlock() = default;

short CutCopperStairsBlock::getId() const {
  return 19158 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> CutCopperStairsBlock::clone() const {
  std::shared_ptr<CutCopperStairsBlock> copy = std::make_shared<CutCopperStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
