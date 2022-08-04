#pragma once

#include "block.h"

class SoulCampfireBlock : public Block {
 public:
  SoulCampfireBlock();
  ~SoulCampfireBlock() override;

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
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_TRUE;

  enum {
    SIGNAL_FIRE_TRUE = 0,
    SIGNAL_FIRE_FALSE = 1,
  } signal_fire = SIGNAL_FIRE_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
