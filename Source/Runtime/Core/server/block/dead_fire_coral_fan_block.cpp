

#include "dead_fire_coral_fan_block.h"

DeadFireCoralFanBlock::DeadFireCoralFanBlock() = default;
DeadFireCoralFanBlock::~DeadFireCoralFanBlock() = default;

short DeadFireCoralFanBlock::getId() const {
  return 10427 + waterlogged * 1;
}

std::shared_ptr<Block> DeadFireCoralFanBlock::clone() const {
  std::shared_ptr<DeadFireCoralFanBlock> copy = std::make_shared<DeadFireCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
