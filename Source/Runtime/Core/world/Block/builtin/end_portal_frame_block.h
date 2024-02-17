#pragma once

#include "block.h"

class EndPortalFrameBlock : public Block {
 public:
  EndPortalFrameBlock();
  ~EndPortalFrameBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    EYE_TRUE = 0,
    EYE_FALSE = 1,
  } eye = EYE_FALSE;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

};
