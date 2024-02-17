#pragma once

#include "block.h"

class CommandBlockBlock : public Block {
 public:
  CommandBlockBlock();
  ~CommandBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    CONDITIONAL_TRUE = 0,
    CONDITIONAL_FALSE = 1,
  } conditional = CONDITIONAL_FALSE;

  enum {
    FACING_NORTH = 0,
    FACING_EAST = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_UP = 4,
    FACING_DOWN = 5,
  } facing = FACING_NORTH;

};
