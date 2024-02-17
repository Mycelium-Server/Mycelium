#pragma once

#include "block.h"

class JigsawBlock : public Block {
 public:
  JigsawBlock();
  ~JigsawBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    ORIENTATION_DOWN_EAST = 0,
    ORIENTATION_DOWN_NORTH = 1,
    ORIENTATION_DOWN_SOUTH = 2,
    ORIENTATION_DOWN_WEST = 3,
    ORIENTATION_UP_EAST = 4,
    ORIENTATION_UP_NORTH = 5,
    ORIENTATION_UP_SOUTH = 6,
    ORIENTATION_UP_WEST = 7,
    ORIENTATION_WEST_UP = 8,
    ORIENTATION_EAST_UP = 9,
    ORIENTATION_NORTH_UP = 10,
    ORIENTATION_SOUTH_UP = 11,
  } orientation = ORIENTATION_NORTH_UP;

};
