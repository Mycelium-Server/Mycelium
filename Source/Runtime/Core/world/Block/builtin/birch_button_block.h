#pragma once

#include "block.h"

class BirchButtonBlock : public Block {
 public:
  BirchButtonBlock();
  ~BirchButtonBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACE_FLOOR = 0,
    FACE_WALL = 1,
    FACE_CEILING = 2,
  } face = FACE_WALL;

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
