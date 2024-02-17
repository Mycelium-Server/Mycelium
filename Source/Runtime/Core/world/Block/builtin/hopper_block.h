#pragma once

#include "block.h"

class HopperBlock : public Block {
 public:
  HopperBlock();
  ~HopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    ENABLED_TRUE = 0,
    ENABLED_FALSE = 1,
  } enabled = ENABLED_TRUE;

  enum {
    FACING_DOWN = 0,
    FACING_NORTH = 1,
    FACING_SOUTH = 2,
    FACING_WEST = 3,
    FACING_EAST = 4,
  } facing = FACING_DOWN;

};
