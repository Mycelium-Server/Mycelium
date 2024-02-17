#pragma once

#include "block.h"

class OakSignBlock : public Block {
 public:
  OakSignBlock();
  ~OakSignBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    ROTATION_0 = 0,
    ROTATION_1 = 1,
    ROTATION_2 = 2,
    ROTATION_3 = 3,
    ROTATION_4 = 4,
    ROTATION_5 = 5,
    ROTATION_6 = 6,
    ROTATION_7 = 7,
    ROTATION_8 = 8,
    ROTATION_9 = 9,
    ROTATION_10 = 10,
    ROTATION_11 = 11,
    ROTATION_12 = 12,
    ROTATION_13 = 13,
    ROTATION_14 = 14,
    ROTATION_15 = 15,
  } rotation = ROTATION_0;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
