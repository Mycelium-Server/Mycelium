#pragma once

#include "block.h"

class OakLeavesBlock : public Block {
 public:
  OakLeavesBlock();
  ~OakLeavesBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    DISTANCE_1 = 0,
    DISTANCE_2 = 1,
    DISTANCE_3 = 2,
    DISTANCE_4 = 3,
    DISTANCE_5 = 4,
    DISTANCE_6 = 5,
    DISTANCE_7 = 6,
  } distance = DISTANCE_7;

  enum {
    PERSISTENT_TRUE = 0,
    PERSISTENT_FALSE = 1,
  } persistent = PERSISTENT_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
