#include "spruce_trapdoor_block.h"

SpruceTrapdoorBlock::SpruceTrapdoorBlock() = default;
SpruceTrapdoorBlock::~SpruceTrapdoorBlock() = default;

short SpruceTrapdoorBlock::getId() const {
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4484;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4485;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4486;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4487;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4488;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4489;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4490;
  if (facing == FACING_NORTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4491;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4492;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4493;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4494;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4495;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4496;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4497;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4498;
  if (facing == FACING_NORTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4499;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4500;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4501;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4502;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4503;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4504;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4505;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4506;
  if (facing == FACING_SOUTH && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4507;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4508;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4509;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4510;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4511;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4512;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4513;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4514;
  if (facing == FACING_SOUTH && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4515;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4516;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4517;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4518;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4519;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4520;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4521;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4522;
  if (facing == FACING_WEST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4523;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4524;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4525;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4526;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4527;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4528;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4529;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4530;
  if (facing == FACING_WEST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4531;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4532;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4533;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4534;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4535;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4536;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4537;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4538;
  if (facing == FACING_EAST && half == HALF_TOP && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4539;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4540;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4541;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4542;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_TRUE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4543;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_TRUE) return 4544;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_TRUE && waterlogged == WATERLOGGED_FALSE) return 4545;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_TRUE) return 4546;
  if (facing == FACING_EAST && half == HALF_BOTTOM && open == OPEN_FALSE && powered == POWERED_FALSE && waterlogged == WATERLOGGED_FALSE) return 4547;
  return 4499;
}