

#include "cobblestone_stairs_block.h"

CobblestoneStairsBlock::CobblestoneStairsBlock() = default;
CobblestoneStairsBlock::~CobblestoneStairsBlock() = default;

short CobblestoneStairsBlock::getId() const {
  return 3952 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> CobblestoneStairsBlock::clone() const {
  std::shared_ptr<CobblestoneStairsBlock> copy = std::make_shared<CobblestoneStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
