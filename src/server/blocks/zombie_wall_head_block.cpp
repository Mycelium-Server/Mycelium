#include "zombie_wall_head_block.h"

ZombieWallHeadBlock::ZombieWallHeadBlock() = default;
ZombieWallHeadBlock::~ZombieWallHeadBlock() = default;

short ZombieWallHeadBlock::getId() const {
  if (facing == FACING_NORTH) return 7163;
  if (facing == FACING_SOUTH) return 7164;
  if (facing == FACING_WEST) return 7165;
  if (facing == FACING_EAST) return 7166;
  return 7163;
}
