#include "chorus_flower_block.h"

ChorusFlowerBlock::ChorusFlowerBlock() = default;
ChorusFlowerBlock::~ChorusFlowerBlock() = default;

short ChorusFlowerBlock::getId() const {
  if (age == AGE_0) return 10009;
  if (age == AGE_1) return 10010;
  if (age == AGE_2) return 10011;
  if (age == AGE_3) return 10012;
  if (age == AGE_4) return 10013;
  if (age == AGE_5) return 10014;
  return 10009;
}
