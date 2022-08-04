#include "brewing_stand_block.h"

BrewingStandBlock::BrewingStandBlock() = default;
BrewingStandBlock::~BrewingStandBlock() = default;

short BrewingStandBlock::getId() const {
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5720;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5721;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5722;
  if (has_bottle_0 == HAS_BOTTLE_0_TRUE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5723;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5724;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_TRUE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5725;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_TRUE) return 5726;
  if (has_bottle_0 == HAS_BOTTLE_0_FALSE && has_bottle_1 == HAS_BOTTLE_1_FALSE && has_bottle_2 == HAS_BOTTLE_2_FALSE) return 5727;
  return 5727;
}
