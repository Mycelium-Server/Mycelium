

#include "horn_coral_wall_fan_block.h"

HornCoralWallFanBlock::HornCoralWallFanBlock() = default;
HornCoralWallFanBlock::~HornCoralWallFanBlock() = default;

short HornCoralWallFanBlock::getId() const {
  return 10513 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> HornCoralWallFanBlock::clone() const {
  std::shared_ptr<HornCoralWallFanBlock> copy = std::make_shared<HornCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
