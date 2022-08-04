#pragma once

#include "block.h"

class CocoaBlock : public Block {
 public:
  CocoaBlock();
  ~CocoaBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
  } age = AGE_0;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

};
