#pragma once

#include "block.h"

class ComposterBlock : public Block {
 public:
  ComposterBlock();
  ~ComposterBlock() override;

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
  } level = LEVEL_0;

};
