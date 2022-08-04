#pragma once

#include "block.h"

class MangroveRootsBlock : public Block {
 public:
  MangroveRootsBlock();
  ~MangroveRootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
