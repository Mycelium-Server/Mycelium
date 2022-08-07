#include "acacia_wood_block.h"

AcaciaWoodBlock::AcaciaWoodBlock() = default;
AcaciaWoodBlock::~AcaciaWoodBlock() = default;

short AcaciaWoodBlock::getId() const {
  if (axis == AXIS_X) return 176;
  if (axis == AXIS_Y) return 177;
  if (axis == AXIS_Z) return 178;
  return 177;
}
