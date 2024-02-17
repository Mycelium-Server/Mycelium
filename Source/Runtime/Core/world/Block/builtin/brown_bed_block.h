#pragma once

#include "block.h"

class BrownBedBlock : public Block {
 public:
  BrownBedBlock();
  ~BrownBedBlock() override;

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

  enum {
    OCCUPIED_TRUE = 0,
    OCCUPIED_FALSE = 1,
  } occupied = OCCUPIED_FALSE;

  enum {
    PART_HEAD = 0,
    PART_FOOT = 1,
  } part = PART_FOOT;

};
