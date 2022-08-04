#pragma once

#include "block.h"

class SweetBerryBushBlock : public Block {
 public:
  SweetBerryBushBlock();
  ~SweetBerryBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
  } age = AGE_0;

};
