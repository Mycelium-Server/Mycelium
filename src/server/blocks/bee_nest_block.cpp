#include "bee_nest_block.h"

BeeNestBlock::BeeNestBlock() = default;
BeeNestBlock::~BeeNestBlock() = default;

short BeeNestBlock::getId() const {
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_0) return 16985;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_1) return 16986;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_2) return 16987;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_3) return 16988;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_4) return 16989;
  if (facing == FACING_NORTH && honey_level == HONEY_LEVEL_5) return 16990;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_0) return 16991;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_1) return 16992;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_2) return 16993;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_3) return 16994;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_4) return 16995;
  if (facing == FACING_SOUTH && honey_level == HONEY_LEVEL_5) return 16996;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_0) return 16997;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_1) return 16998;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_2) return 16999;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_3) return 17000;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_4) return 17001;
  if (facing == FACING_WEST && honey_level == HONEY_LEVEL_5) return 17002;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_0) return 17003;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_1) return 17004;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_2) return 17005;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_3) return 17006;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_4) return 17007;
  if (facing == FACING_EAST && honey_level == HONEY_LEVEL_5) return 17008;
  return 16985;
}
