

#include "brain_coral_block.h"

BrainCoralBlock::BrainCoralBlock() = default;
BrainCoralBlock::~BrainCoralBlock() = default;

short BrainCoralBlock::getId() const {
  return 10413 + waterlogged * 1;
}

std::shared_ptr<Block> BrainCoralBlock::clone() const {
  std::shared_ptr<BrainCoralBlock> copy = std::make_shared<BrainCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
