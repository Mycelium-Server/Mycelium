#pragma once

#include "block.h"

class RedstoneWireBlock : public Block {
 public:
  RedstoneWireBlock();
  ~RedstoneWireBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    EAST_UP = 0,
    EAST_SIDE = 1,
    EAST_NONE = 2,
  } east = EAST_NONE;

  enum {
    NORTH_UP = 0,
    NORTH_SIDE = 1,
    NORTH_NONE = 2,
  } north = NORTH_NONE;

  enum {
    POWER_0 = 0,
    POWER_1 = 1,
    POWER_2 = 2,
    POWER_3 = 3,
    POWER_4 = 4,
    POWER_5 = 5,
    POWER_6 = 6,
    POWER_7 = 7,
    POWER_8 = 8,
    POWER_9 = 9,
    POWER_10 = 10,
    POWER_11 = 11,
    POWER_12 = 12,
    POWER_13 = 13,
    POWER_14 = 14,
    POWER_15 = 15,
  } power = POWER_0;

  enum {
    SOUTH_UP = 0,
    SOUTH_SIDE = 1,
    SOUTH_NONE = 2,
  } south = SOUTH_NONE;

  enum {
    WEST_UP = 0,
    WEST_SIDE = 1,
    WEST_NONE = 2,
  } west = WEST_NONE;

};
