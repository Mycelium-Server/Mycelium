#pragma once

#include "block.h"

class RepeaterBlock : public Block {
 public:
  RepeaterBlock();
  ~RepeaterBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    DELAY_1 = 0,
    DELAY_2 = 1,
    DELAY_3 = 2,
    DELAY_4 = 3,
  } delay = DELAY_1;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    LOCKED_TRUE = 0,
    LOCKED_FALSE = 1,
  } locked = LOCKED_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
