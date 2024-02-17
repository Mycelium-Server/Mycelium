#pragma once

#include "block.h"

class StoneBrickWallBlock : public Block {
 public:
  StoneBrickWallBlock();
  ~StoneBrickWallBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    EAST_NONE = 0,
    EAST_LOW = 1,
    EAST_TALL = 2,
  } east = EAST_NONE;

  enum {
    NORTH_NONE = 0,
    NORTH_LOW = 1,
    NORTH_TALL = 2,
  } north = NORTH_NONE;

  enum {
    SOUTH_NONE = 0,
    SOUTH_LOW = 1,
    SOUTH_TALL = 2,
  } south = SOUTH_NONE;

  enum {
    UP_TRUE = 0,
    UP_FALSE = 1,
  } up = UP_TRUE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

  enum {
    WEST_NONE = 0,
    WEST_LOW = 1,
    WEST_TALL = 2,
  } west = WEST_NONE;

};
