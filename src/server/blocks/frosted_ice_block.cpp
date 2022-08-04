#include "frosted_ice_block.h"

FrostedIceBlock::FrostedIceBlock() = default;
FrostedIceBlock::~FrostedIceBlock() = default;

short FrostedIceBlock::getId() const {
  if (age == AGE_0) return 10130;
  if (age == AGE_1) return 10131;
  if (age == AGE_2) return 10132;
  if (age == AGE_3) return 10133;
  return 10130;
}
