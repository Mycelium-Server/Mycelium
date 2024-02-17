

#include "tube_coral_fan_block.h"

TubeCoralFanBlock::TubeCoralFanBlock() = default;
TubeCoralFanBlock::~TubeCoralFanBlock() = default;

short TubeCoralFanBlock::getId() const {
  return 10431 + waterlogged * 1;
}

std::shared_ptr<Block> TubeCoralFanBlock::clone() const {
  std::shared_ptr<TubeCoralFanBlock> copy = std::make_shared<TubeCoralFanBlock>();
  copy->waterlogged = waterlogged;
  return copy;
}
