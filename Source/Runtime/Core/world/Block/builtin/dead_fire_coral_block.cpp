

#include "dead_fire_coral_block.h"

DeadFireCoralBlock::DeadFireCoralBlock() = default;
DeadFireCoralBlock::~DeadFireCoralBlock() = default;

short DeadFireCoralBlock::getId() const {
  return 10407 + waterlogged * 1;
}

std::shared_ptr<Block> DeadFireCoralBlock::clone() const {
  std::shared_ptr<DeadFireCoralBlock> copy = std::make_shared<DeadFireCoralBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
