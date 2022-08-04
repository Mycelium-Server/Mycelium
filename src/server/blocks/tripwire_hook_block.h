#pragma once

#include "block.h"

class TripwireHookBlock : public Block {
 public:
  TripwireHookBlock();
  ~TripwireHookBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    ATTACHED_TRUE = 0,
    ATTACHED_FALSE = 1,
  } attached = ATTACHED_FALSE;

  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
