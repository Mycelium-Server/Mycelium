#pragma once

#include "block.h"

class BirchDoorBlock : public Block {
 public:
  BirchDoorBlock();
  ~BirchDoorBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

  enum {
    HINGE_LEFT = 0,
    HINGE_RIGHT = 1,
  } hinge = HINGE_LEFT;

  enum {
    OPEN_TRUE = 0,
    OPEN_FALSE = 1,
  } open = OPEN_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
