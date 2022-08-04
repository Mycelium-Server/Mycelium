#pragma once

#include "block.h"

class DropperBlock : public Block {
 public:
  DropperBlock();
  ~DropperBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    FACING_NORTH = 0,
    FACING_EAST = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_UP = 4,
    FACING_DOWN = 5,
  } facing = FACING_NORTH;

  enum {
    TRIGGERED_TRUE = 0,
    TRIGGERED_FALSE = 1,
  } triggered = TRIGGERED_FALSE;

};
