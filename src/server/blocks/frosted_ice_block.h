#pragma once

#include "block.h"

class FrostedIceBlock : public Block {
 public:
  FrostedIceBlock();
  ~FrostedIceBlock() override;

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
