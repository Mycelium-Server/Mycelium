#pragma once

#include "block.h"

class ComparatorBlock : public Block {
 public:
  ComparatorBlock();
  ~ComparatorBlock() override;

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
    MODE_COMPARE = 0,
    MODE_SUBTRACT = 1,
  } mode = MODE_COMPARE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
