#include "water_cauldron_block.h"

WaterCauldronBlock::WaterCauldronBlock() = default;
WaterCauldronBlock::~WaterCauldronBlock() = default;

short WaterCauldronBlock::getId() const {
  if (level == LEVEL_1) return 5729;
  if (level == LEVEL_2) return 5730;
  if (level == LEVEL_3) return 5731;
  return 5729;
}
