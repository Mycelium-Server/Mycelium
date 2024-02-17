

#include "tube_coral_wall_fan_block.h"

TubeCoralWallFanBlock::TubeCoralWallFanBlock() = default;
TubeCoralWallFanBlock::~TubeCoralWallFanBlock() = default;

short TubeCoralWallFanBlock::getId() const {
  return 10481 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> TubeCoralWallFanBlock::clone() const {
  std::shared_ptr<TubeCoralWallFanBlock> copy = std::make_shared<TubeCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
