#pragma once

#include "block.h"

class GrindstoneBlock : public Block {
 public:
  GrindstoneBlock();
  ~GrindstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;

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

};
