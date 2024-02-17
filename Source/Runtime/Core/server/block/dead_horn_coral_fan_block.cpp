

#include "dead_horn_coral_fan_block.h"

DeadHornCoralFanBlock::DeadHornCoralFanBlock() = default;
DeadHornCoralFanBlock::~DeadHornCoralFanBlock() = default;

short DeadHornCoralFanBlock::getId() const {
  return 10429 + waterlogged * 1;
}

std::shared_ptr<Block> DeadHornCoralFanBlock::clone() const {
  std::shared_ptr<DeadHornCoralFanBlock> copy = std::make_shared<DeadHornCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
