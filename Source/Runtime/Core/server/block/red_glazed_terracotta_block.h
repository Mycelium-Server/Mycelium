#pragma once

#include "block.h"

class RedGlazedTerracottaBlock : public Block {
 public:
  RedGlazedTerracottaBlock();
  ~RedGlazedTerracottaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

};
