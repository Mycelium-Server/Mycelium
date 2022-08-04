#include "melon_stem_block.h"

MelonStemBlock::MelonStemBlock() = default;
MelonStemBlock::~MelonStemBlock() = default;

short MelonStemBlock::getId() const {
  if (age == AGE_0) return 5159;
  if (age == AGE_1) return 5160;
  if (age == AGE_2) return 5161;
  if (age == AGE_3) return 5162;
  if (age == AGE_4) return 5163;
  if (age == AGE_5) return 5164;
  if (age == AGE_6) return 5165;
  if (age == AGE_7) return 5166;
  return 5159;
}
