#include "campfire_block.h"

CampfireBlock::CampfireBlock() = default;
CampfireBlock::~CampfireBlock() = default;

short CampfireBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16099;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16100;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16101;
  if (facing == FACING_NORTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16102;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16103;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16104;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16105;
  if (facing == FACING_NORTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16106;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16107;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16108;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16109;
  if (facing == FACING_SOUTH && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16110;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16111;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16112;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16113;
  if (facing == FACING_SOUTH && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16114;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16115;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16116;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16117;
  if (facing == FACING_WEST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16118;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16119;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16120;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16121;
  if (facing == FACING_WEST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16122;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16123;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16124;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16125;
  if (facing == FACING_EAST && lit == LIT_TRUE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16126;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_TRUE) return 16127;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_TRUE && waterlogged == WATERLOGGED_FALSE) return 16128;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_TRUE) return 16129;
  if (facing == FACING_EAST && lit == LIT_FALSE && signal_fire == SIGNAL_FIRE_FALSE && waterlogged == WATERLOGGED_FALSE) return 16130;
  return 16102;
}
