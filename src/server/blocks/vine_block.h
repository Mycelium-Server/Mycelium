#pragma once

#include "block.h"

class VineBlock : public Block {
 public:
  VineBlock();
  ~VineBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    EAST_TRUE = 0,
    EAST_FALSE = 1,
  } east = EAST_FALSE;

  enum {
    NORTH_TRUE = 0,
    NORTH_FALSE = 1,
  } north = NORTH_FALSE;

  enum {
    SOUTH_TRUE = 0,
    SOUTH_FALSE = 1,
  } south = SOUTH_FALSE;

  enum {
    UP_TRUE = 0,
    UP_FALSE = 1,
  } up = UP_FALSE;

  enum {
    WEST_TRUE = 0,
    WEST_FALSE = 1,
  } west = WEST_FALSE;

};