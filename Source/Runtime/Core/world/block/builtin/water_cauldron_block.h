#pragma once

#include "block.h"

class WaterCauldronBlock : public Block {
 public:
  WaterCauldronBlock();
  ~WaterCauldronBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    LEVEL_1 = 0,
    LEVEL_2 = 1,
    LEVEL_3 = 2,
  } level = LEVEL_1;

};
