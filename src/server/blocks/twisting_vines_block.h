#pragma once

#include "block.h"

class TwistingVinesBlock : public Block {
 public:
  TwistingVinesBlock();
  ~TwistingVinesBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
    AGE_4 = 4,
    AGE_5 = 5,
    AGE_6 = 6,
    AGE_7 = 7,
    AGE_8 = 8,
    AGE_9 = 9,
    AGE_10 = 10,
    AGE_11 = 11,
    AGE_12 = 12,
    AGE_13 = 13,
    AGE_14 = 14,
    AGE_15 = 15,
    AGE_16 = 16,
    AGE_17 = 17,
    AGE_18 = 18,
    AGE_19 = 19,
    AGE_20 = 20,
    AGE_21 = 21,
    AGE_22 = 22,
    AGE_23 = 23,
    AGE_24 = 24,
    AGE_25 = 25,
  } age = AGE_0;

};
