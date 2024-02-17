

#include "dead_bubble_coral_wall_fan_block.h"

DeadBubbleCoralWallFanBlock::DeadBubbleCoralWallFanBlock() = default;
DeadBubbleCoralWallFanBlock::~DeadBubbleCoralWallFanBlock() = default;

short DeadBubbleCoralWallFanBlock::getId() const {
  return 10457 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DeadBubbleCoralWallFanBlock::clone() const {
  std::shared_ptr<DeadBubbleCoralWallFanBlock> copy = std::make_shared<DeadBubbleCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
