#pragma once

#include "block.h"

class HangingRootsBlock : public Block {
 public:
  HangingRootsBlock();
  ~HangingRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
