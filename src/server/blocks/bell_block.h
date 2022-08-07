#pragma once

#include "block.h"

class BellBlock : public Block {
 public:
  BellBlock();
  ~BellBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    ATTACHMENT_FLOOR = 0,
    ATTACHMENT_CEILING = 1,
    ATTACHMENT_SINGLE_WALL = 2,
    ATTACHMENT_DOUBLE_WALL = 3,
  } attachment = ATTACHMENT_FLOOR;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
