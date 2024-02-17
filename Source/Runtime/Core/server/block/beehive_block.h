#pragma once

#include "block.h"

class BeehiveBlock : public Block {
 public:
  BeehiveBlock();
  ~BeehiveBlock() override;

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
    HONEY_LEVEL_0 = 0,
    HONEY_LEVEL_1 = 1,
    HONEY_LEVEL_2 = 2,
    HONEY_LEVEL_3 = 3,
    HONEY_LEVEL_4 = 4,
    HONEY_LEVEL_5 = 5,
  } honey_level = HONEY_LEVEL_0;

};
