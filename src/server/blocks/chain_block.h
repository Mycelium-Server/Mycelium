#pragma once

#include "block.h"

class ChainBlock : public Block {
 public:
  ChainBlock();
  ~ChainBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  } axis = AXIS_Y;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
