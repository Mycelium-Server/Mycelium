#pragma once

#include "block.h"

class LavaBlock : public Block {
 public:
  LavaBlock();
  ~LavaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    LEVEL_0 = 0,
    LEVEL_1 = 1,
    LEVEL_2 = 2,
    LEVEL_3 = 3,
    LEVEL_4 = 4,
    LEVEL_5 = 5,
    LEVEL_6 = 6,
    LEVEL_7 = 7,
    LEVEL_8 = 8,
    LEVEL_9 = 9,
    LEVEL_10 = 10,
    LEVEL_11 = 11,
    LEVEL_12 = 12,
    LEVEL_13 = 13,
    LEVEL_14 = 14,
    LEVEL_15 = 15,
  } level = LEVEL_0;

};
