

#include "horn_coral_fan_block.h"

HornCoralFanBlock::HornCoralFanBlock() = default;
HornCoralFanBlock::~HornCoralFanBlock() = default;

short HornCoralFanBlock::getId() const {
  return 10439 + waterlogged * 1;
}

std::shared_ptr<Block> HornCoralFanBlock::clone() const {
  std::shared_ptr<HornCoralFanBlock> copy = std::make_shared<HornCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
