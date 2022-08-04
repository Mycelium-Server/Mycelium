#pragma once

#include "block.h"

class LimeShulkerBoxBlock : public Block {
 public:
  LimeShulkerBoxBlock();
  ~LimeShulkerBoxBlock() override;

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
  } facing = FACING_UP;

};
