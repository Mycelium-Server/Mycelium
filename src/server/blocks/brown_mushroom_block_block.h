#pragma once

#include "block.h"

class BrownMushroomBlockBlock : public Block {
 public:
  BrownMushroomBlockBlock();
  ~BrownMushroomBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    DOWN_TRUE = 0,
    DOWN_FALSE = 1,
  } down = DOWN_TRUE;

  enum {
    EAST_TRUE = 0,
    EAST_FALSE = 1,
  } east = EAST_TRUE;

  enum {
    NORTH_TRUE = 0,
    NORTH_FALSE = 1,
  } north = NORTH_TRUE;

  enum {
    SOUTH_TRUE = 0,
    SOUTH_FALSE = 1,
  } south = SOUTH_TRUE;

  enum {
    UP_TRUE = 0,
    UP_FALSE = 1,
  } up = UP_TRUE;

  enum {
    WEST_TRUE = 0,
    WEST_FALSE = 1,
  } west = WEST_TRUE;

};
