#pragma once

#include "block.h"

class FireCoralBlock : public Block {
 public:
  FireCoralBlock();
  ~FireCoralBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
