#include "target_block.h"

TargetBlock::TargetBlock() = default;
TargetBlock::~TargetBlock() = default;

short TargetBlock::getId() const {
  if (power == POWER_0) return 16969;
  if (power == POWER_1) return 16970;
  if (power == POWER_2) return 16971;
  if (power == POWER_3) return 16972;
  if (power == POWER_4) return 16973;
  if (power == POWER_5) return 16974;
  if (power == POWER_6) return 16975;
  if (power == POWER_7) return 16976;
  if (power == POWER_8) return 16977;
  if (power == POWER_9) return 16978;
  if (power == POWER_10) return 16979;
  if (power == POWER_11) return 16980;
  if (power == POWER_12) return 16981;
  if (power == POWER_13) return 16982;
  if (power == POWER_14) return 16983;
  if (power == POWER_15) return 16984;
  return 16969;
}
