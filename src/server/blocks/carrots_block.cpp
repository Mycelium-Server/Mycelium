#include "carrots_block.h"

CarrotsBlock::CarrotsBlock() = default;
CarrotsBlock::~CarrotsBlock() = default;

short CarrotsBlock::getId() const {
  if (age == AGE_0) return 6923;
  if (age == AGE_1) return 6924;
  if (age == AGE_2) return 6925;
  if (age == AGE_3) return 6926;
  if (age == AGE_4) return 6927;
  if (age == AGE_5) return 6928;
  if (age == AGE_6) return 6929;
  if (age == AGE_7) return 6930;
  return 6923;
}
