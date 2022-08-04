#pragma once

#include "block.h"

class WallTorchBlock : public Block {
 public:
  WallTorchBlock();
  ~WallTorchBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

};
