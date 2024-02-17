#pragma once

#include "block.h"

class YellowStainedGlassPaneBlock : public Block {
 public:
  YellowStainedGlassPaneBlock();
  ~YellowStainedGlassPaneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
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
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

  enum {
    WEST_TRUE = 0,
    WEST_FALSE = 1,
  } west = WEST_FALSE;

};
