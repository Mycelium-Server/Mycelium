#pragma once

#include "block.h"

class PistonBlock : public Block {
 public:
  PistonBlock();
  ~PistonBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    EXTENDED_TRUE = 0,
    EXTENDED_FALSE = 1,
  } extended = EXTENDED_FALSE;

  enum {
    FACING_NORTH = 0,
    FACING_EAST = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_UP = 4,
    FACING_DOWN = 5,
  } facing = FACING_NORTH;

};
