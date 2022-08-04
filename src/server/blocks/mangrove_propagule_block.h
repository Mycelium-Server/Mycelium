#pragma once

#include "block.h"

class MangrovePropaguleBlock : public Block {
 public:
  MangrovePropaguleBlock();
  ~MangrovePropaguleBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
    AGE_4 = 4,
  } age = AGE_0;

  enum {
    HANGING_TRUE = 0,
    HANGING_FALSE = 1,
  } hanging = HANGING_FALSE;

  enum {
    STAGE_0 = 0,
    STAGE_1 = 1,
  } stage = STAGE_0;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
