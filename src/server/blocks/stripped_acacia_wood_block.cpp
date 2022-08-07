#include "stripped_acacia_wood_block.h"

StrippedAcaciaWoodBlock::StrippedAcaciaWoodBlock() = default;
StrippedAcaciaWoodBlock::~StrippedAcaciaWoodBlock() = default;

short StrippedAcaciaWoodBlock::getId() const {
  if (axis == AXIS_X) return 197;
  if (axis == AXIS_Y) return 198;
  if (axis == AXIS_Z) return 199;
  return 198;
}
