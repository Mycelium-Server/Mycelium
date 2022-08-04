#pragma once

#include "block.h"

class DeadFireCoralFanBlock : public Block {
 public:
  DeadFireCoralFanBlock();
  ~DeadFireCoralFanBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
