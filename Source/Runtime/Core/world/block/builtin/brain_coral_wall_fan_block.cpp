

#include "brain_coral_wall_fan_block.h"

BrainCoralWallFanBlock::BrainCoralWallFanBlock() = default;
BrainCoralWallFanBlock::~BrainCoralWallFanBlock() = default;

short BrainCoralWallFanBlock::getId() const {
  return 10489 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> BrainCoralWallFanBlock::clone() const {
  std::shared_ptr<BrainCoralWallFanBlock> copy = std::make_shared<BrainCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
