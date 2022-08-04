#pragma once

#include "block.h"

class PowderSnowCauldronBlock : public Block {
 public:
  PowderSnowCauldronBlock();
  ~PowderSnowCauldronBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    LEVEL_1 = 0,
    LEVEL_2 = 1,
    LEVEL_3 = 2,
  } level = LEVEL_1;

};
