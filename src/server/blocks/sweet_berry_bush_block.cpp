#include "sweet_berry_bush_block.h"

SweetBerryBushBlock::SweetBerryBushBlock() = default;
SweetBerryBushBlock::~SweetBerryBushBlock() = default;

short SweetBerryBushBlock::getId() const {
  if (age == AGE_0) return 16163;
  if (age == AGE_1) return 16164;
  if (age == AGE_2) return 16165;
  if (age == AGE_3) return 16166;
  return 16163;
}
