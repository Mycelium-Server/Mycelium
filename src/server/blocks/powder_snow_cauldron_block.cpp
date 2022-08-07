#include "powder_snow_cauldron_block.h"

PowderSnowCauldronBlock::PowderSnowCauldronBlock() = default;
PowderSnowCauldronBlock::~PowderSnowCauldronBlock() = default;

short PowderSnowCauldronBlock::getId() const {
  if (level == LEVEL_1) return 5733;
  if (level == LEVEL_2) return 5734;
  if (level == LEVEL_3) return 5735;
  return 5733;
}
