#pragma once

#include "block.h"

class SmoothSandstoneSlabBlock : public Block {
 public:
  SmoothSandstoneSlabBlock();
  ~SmoothSandstoneSlabBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    TYPE_TOP = 0,
    TYPE_BOTTOM = 1,
    TYPE_DOUBLE = 2,
  } type = TYPE_BOTTOM;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
