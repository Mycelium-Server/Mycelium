#pragma once

#include "block.h"

class RailBlock : public Block {
 public:
  RailBlock();
  ~RailBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    SHAPE_NORTH_SOUTH = 0,
    SHAPE_EAST_WEST = 1,
    SHAPE_ASCENDING_EAST = 2,
    SHAPE_ASCENDING_WEST = 3,
    SHAPE_ASCENDING_NORTH = 4,
    SHAPE_ASCENDING_SOUTH = 5,
    SHAPE_SOUTH_EAST = 6,
    SHAPE_SOUTH_WEST = 7,
    SHAPE_NORTH_WEST = 8,
    SHAPE_NORTH_EAST = 9,
  } shape = SHAPE_NORTH_SOUTH;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
