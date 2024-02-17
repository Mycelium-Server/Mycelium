

#include "tube_coral_block.h"

TubeCoralBlock::TubeCoralBlock() = default;
TubeCoralBlock::~TubeCoralBlock() = default;

short TubeCoralBlock::getId() const {
  return 10411 + waterlogged * 1;
}

std::shared_ptr<Block> TubeCoralBlock::clone() const {
  std::shared_ptr<TubeCoralBlock> copy = std::make_shared<TubeCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
