#pragma once

#include "block.h"

class FireBlock : public Block {
 public:
  FireBlock();
  ~FireBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
    AGE_4 = 4,
    AGE_5 = 5,
    AGE_6 = 6,
    AGE_7 = 7,
    AGE_8 = 8,
    AGE_9 = 9,
    AGE_10 = 10,
    AGE_11 = 11,
    AGE_12 = 12,
    AGE_13 = 13,
    AGE_14 = 14,
    AGE_15 = 15,
  } age = AGE_0;

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
