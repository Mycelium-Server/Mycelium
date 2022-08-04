#pragma once

#include "block.h"

class SugarCaneBlock : public Block {
 public:
  SugarCaneBlock();
  ~SugarCaneBlock() override;

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
  } age = AGE_0;

};
