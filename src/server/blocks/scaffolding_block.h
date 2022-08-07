#pragma once

#include "block.h"

class ScaffoldingBlock : public Block {
 public:
  ScaffoldingBlock();
  ~ScaffoldingBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    BOTTOM_TRUE = 0,
    BOTTOM_FALSE = 1,
  } bottom = BOTTOM_FALSE;

  enum {
    DISTANCE_0 = 0,
    DISTANCE_1 = 1,
    DISTANCE_2 = 2,
    DISTANCE_3 = 3,
    DISTANCE_4 = 4,
    DISTANCE_5 = 5,
    DISTANCE_6 = 6,
    DISTANCE_7 = 7,
  } distance = DISTANCE_7;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
