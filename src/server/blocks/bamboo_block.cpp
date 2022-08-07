#include "bamboo_block.h"

BambooBlock::BambooBlock() = default;
BambooBlock::~BambooBlock() = default;

short BambooBlock::getId() const {
  if (age == AGE_0 && leaves == LEAVES_NONE && stage == STAGE_0) return 10533;
  if (age == AGE_0 && leaves == LEAVES_NONE && stage == STAGE_1) return 10534;
  if (age == AGE_0 && leaves == LEAVES_SMALL && stage == STAGE_0) return 10535;
  if (age == AGE_0 && leaves == LEAVES_SMALL && stage == STAGE_1) return 10536;
  if (age == AGE_0 && leaves == LEAVES_LARGE && stage == STAGE_0) return 10537;
  if (age == AGE_0 && leaves == LEAVES_LARGE && stage == STAGE_1) return 10538;
  if (age == AGE_1 && leaves == LEAVES_NONE && stage == STAGE_0) return 10539;
  if (age == AGE_1 && leaves == LEAVES_NONE && stage == STAGE_1) return 10540;
  if (age == AGE_1 && leaves == LEAVES_SMALL && stage == STAGE_0) return 10541;
  if (age == AGE_1 && leaves == LEAVES_SMALL && stage == STAGE_1) return 10542;
  if (age == AGE_1 && leaves == LEAVES_LARGE && stage == STAGE_0) return 10543;
  if (age == AGE_1 && leaves == LEAVES_LARGE && stage == STAGE_1) return 10544;
  return 10533;
}
