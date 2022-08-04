#pragma once

#include "block.h"

class PistonHeadBlock : public Block {
 public:
  PistonHeadBlock();
  ~PistonHeadBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    TYPE_NORMAL = 0,
    TYPE_STICKY = 1,
  } type = TYPE_NORMAL;

  enum {
    FACING_NORTH = 0,
    FACING_EAST = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_UP = 4,
    FACING_DOWN = 5,
  } facing = FACING_NORTH;

  enum {
    SHORT_TRUE = 0,
    SHORT_FALSE = 1,
  } isShort = SHORT_FALSE;

};
