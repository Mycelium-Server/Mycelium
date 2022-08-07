#include "cactus_block.h"

CactusBlock::CactusBlock() = default;
CactusBlock::~CactusBlock() = default;

short CactusBlock::getId() const {
  if (age == AGE_0) return 4240;
  if (age == AGE_1) return 4241;
  if (age == AGE_2) return 4242;
  if (age == AGE_3) return 4243;
  if (age == AGE_4) return 4244;
  if (age == AGE_5) return 4245;
  if (age == AGE_6) return 4246;
  if (age == AGE_7) return 4247;
  if (age == AGE_8) return 4248;
  if (age == AGE_9) return 4249;
  if (age == AGE_10) return 4250;
  if (age == AGE_11) return 4251;
  if (age == AGE_12) return 4252;
  if (age == AGE_13) return 4253;
  if (age == AGE_14) return 4254;
  if (age == AGE_15) return 4255;
  return 4240;
}
