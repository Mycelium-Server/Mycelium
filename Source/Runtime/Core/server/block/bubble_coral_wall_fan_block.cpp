

#include "bubble_coral_wall_fan_block.h"

BubbleCoralWallFanBlock::BubbleCoralWallFanBlock() = default;
BubbleCoralWallFanBlock::~BubbleCoralWallFanBlock() = default;

short BubbleCoralWallFanBlock::getId() const {
  return 10497 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> BubbleCoralWallFanBlock::clone() const {
  std::shared_ptr<BubbleCoralWallFanBlock> copy = std::make_shared<BubbleCoralWallFanBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
