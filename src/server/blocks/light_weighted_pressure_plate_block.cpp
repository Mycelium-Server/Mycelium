#include "light_weighted_pressure_plate_block.h"

LightWeightedPressurePlateBlock::LightWeightedPressurePlateBlock() = default;
LightWeightedPressurePlateBlock::~LightWeightedPressurePlateBlock() = default;

short LightWeightedPressurePlateBlock::getId() const {
  if (power == POWER_0) return 7263;
  if (power == POWER_1) return 7264;
  if (power == POWER_2) return 7265;
  if (power == POWER_3) return 7266;
  if (power == POWER_4) return 7267;
  if (power == POWER_5) return 7268;
  if (power == POWER_6) return 7269;
  if (power == POWER_7) return 7270;
  if (power == POWER_8) return 7271;
  if (power == POWER_9) return 7272;
  if (power == POWER_10) return 7273;
  if (power == POWER_11) return 7274;
  if (power == POWER_12) return 7275;
  if (power == POWER_13) return 7276;
  if (power == POWER_14) return 7277;
  if (power == POWER_15) return 7278;
  return 7263;
}
