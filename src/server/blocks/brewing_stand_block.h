#pragma once

#include "block.h"

class BrewingStandBlock : public Block {
 public:
  BrewingStandBlock();
  ~BrewingStandBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    HAS_BOTTLE_0_TRUE = 0,
    HAS_BOTTLE_0_FALSE = 1,
  } has_bottle_0 = HAS_BOTTLE_0_FALSE;

  enum {
    HAS_BOTTLE_1_TRUE = 0,
    HAS_BOTTLE_1_FALSE = 1,
  } has_bottle_1 = HAS_BOTTLE_1_FALSE;

  enum {
    HAS_BOTTLE_2_TRUE = 0,
    HAS_BOTTLE_2_FALSE = 1,
  } has_bottle_2 = HAS_BOTTLE_2_FALSE;

};
