#include "pumpkin_stem_block.h"

PumpkinStemBlock::PumpkinStemBlock() = default;
PumpkinStemBlock::~PumpkinStemBlock() = default;

short PumpkinStemBlock::getId() const {
  if (age == AGE_0) return 5151;
  if (age == AGE_1) return 5152;
  if (age == AGE_2) return 5153;
  if (age == AGE_3) return 5154;
  if (age == AGE_4) return 5155;
  if (age == AGE_5) return 5156;
  if (age == AGE_6) return 5157;
  if (age == AGE_7) return 5158;
  return 5151;
}
