

#include "moving_piston_block.h"

MovingPistonBlock::MovingPistonBlock() = default;
MovingPistonBlock::~MovingPistonBlock() = default;

short MovingPistonBlock::getId() const {
  return 1654 + type * 1 + facing * 2;
}

std::shared_ptr<Block> MovingPistonBlock::clone() const {
  std::shared_ptr<MovingPistonBlock> copy = std::make_shared<MovingPistonBlock>();
  copy->type = type;
  copy->facing = facing;
  return copy;
}
