#pragma once

#include "block.h"

class SoulLanternBlock : public Block {
 public:
  SoulLanternBlock();
  ~SoulLanternBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    HANGING_TRUE = 0,
    HANGING_FALSE = 1,
  } hanging = HANGING_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
