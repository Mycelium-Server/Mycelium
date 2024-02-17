

#include "scaffolding_block.h"

ScaffoldingBlock::ScaffoldingBlock() = default;
ScaffoldingBlock::~ScaffoldingBlock() = default;

short ScaffoldingBlock::getId() const {
  return 15960 + waterlogged * 1 + distance * 2 + bottom * 16;
}

std::shared_ptr<Block> ScaffoldingBlock::clone() const {
  std::shared_ptr<ScaffoldingBlock> copy = std::make_shared<ScaffoldingBlock>();
  copy->bottom = bottom;
  copy->distance = distance;
  copy->waterlogged = waterlogged;
  return copy;
}
