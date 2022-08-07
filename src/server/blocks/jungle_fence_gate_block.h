#pragma once

#include "block.h"

class JungleFenceGateBlock : public Block {
 public:
  JungleFenceGateBlock();
  ~JungleFenceGateBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    IN_WALL_TRUE = 0,
    IN_WALL_FALSE = 1,
  } in_wall = IN_WALL_FALSE;

  enum {
    OPEN_TRUE = 0,
    OPEN_FALSE = 1,
  } open = OPEN_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
