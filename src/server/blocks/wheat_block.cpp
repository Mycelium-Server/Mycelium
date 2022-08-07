#include "wheat_block.h"

WheatBlock::WheatBlock() = default;
WheatBlock::~WheatBlock() = default;

short WheatBlock::getId() const {
  if (age == AGE_0) return 3612;
  if (age == AGE_1) return 3613;
  if (age == AGE_2) return 3614;
  if (age == AGE_3) return 3615;
  if (age == AGE_4) return 3616;
  if (age == AGE_5) return 3617;
  if (age == AGE_6) return 3618;
  if (age == AGE_7) return 3619;
  return 3612;
}
