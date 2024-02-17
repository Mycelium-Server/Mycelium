

#include "dead_tube_coral_block.h"

DeadTubeCoralBlock::DeadTubeCoralBlock() = default;
DeadTubeCoralBlock::~DeadTubeCoralBlock() = default;

short DeadTubeCoralBlock::getId() const {
  return 10401 + waterlogged * 1;
}

std::shared_ptr<Block> DeadTubeCoralBlock::clone() const {
  std::shared_ptr<DeadTubeCoralBlock> copy = std::make_shared<DeadTubeCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
