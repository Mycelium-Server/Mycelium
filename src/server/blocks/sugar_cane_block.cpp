#include "sugar_cane_block.h"

SugarCaneBlock::SugarCaneBlock() = default;
SugarCaneBlock::~SugarCaneBlock() = default;

short SugarCaneBlock::getId() const {
  if (age == AGE_0) return 4257;
  if (age == AGE_1) return 4258;
  if (age == AGE_2) return 4259;
  if (age == AGE_3) return 4260;
  if (age == AGE_4) return 4261;
  if (age == AGE_5) return 4262;
  if (age == AGE_6) return 4263;
  if (age == AGE_7) return 4264;
  if (age == AGE_8) return 4265;
  if (age == AGE_9) return 4266;
  if (age == AGE_10) return 4267;
  if (age == AGE_11) return 4268;
  if (age == AGE_12) return 4269;
  if (age == AGE_13) return 4270;
  if (age == AGE_14) return 4271;
  if (age == AGE_15) return 4272;
  return 4257;
}
