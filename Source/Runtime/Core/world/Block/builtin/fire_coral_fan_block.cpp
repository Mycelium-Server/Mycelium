

#include "fire_coral_fan_block.h"

FireCoralFanBlock::FireCoralFanBlock() = default;
FireCoralFanBlock::~FireCoralFanBlock() = default;

short FireCoralFanBlock::getId() const {
  return 10437 + waterlogged * 1;
}

std::shared_ptr<Block> FireCoralFanBlock::clone() const {
  std::shared_ptr<FireCoralFanBlock> copy = std::make_shared<FireCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
