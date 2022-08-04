#pragma once

#include "block.h"

class TripwireBlock : public Block {
 public:
  TripwireBlock();
  ~TripwireBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    ATTACHED_TRUE = 0,
    ATTACHED_FALSE = 1,
  } attached = ATTACHED_FALSE;

  enum {
    DISARMED_TRUE = 0,
    DISARMED_FALSE = 1,
  } disarmed = DISARMED_FALSE;

  enum {
    EAST_TRUE = 0,
    EAST_FALSE = 1,
  } east = EAST_FALSE;

  enum {
    NORTH_TRUE = 0,
    NORTH_FALSE = 1,
  } north = NORTH_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

  enum {
    SOUTH_TRUE = 0,
    SOUTH_FALSE = 1,
  } south = SOUTH_FALSE;

  enum {
    WEST_TRUE = 0,
    WEST_FALSE = 1,
  } west = WEST_FALSE;

};
