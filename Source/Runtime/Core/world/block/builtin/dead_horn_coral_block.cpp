

#include "dead_horn_coral_block.h"

DeadHornCoralBlock::DeadHornCoralBlock() = default;
DeadHornCoralBlock::~DeadHornCoralBlock() = default;

short DeadHornCoralBlock::getId() const {
  return 10409 + waterlogged * 1;
}

std::shared_ptr<Block> DeadHornCoralBlock::clone() const {
  std::shared_ptr<DeadHornCoralBlock> copy = std::make_shared<DeadHornCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
