#include "creeper_wall_head_block.h"

CreeperWallHeadBlock::CreeperWallHeadBlock() = default;
CreeperWallHeadBlock::~CreeperWallHeadBlock() = default;

short CreeperWallHeadBlock::getId() const {
  if (facing == FACING_NORTH) return 7203;
  if (facing == FACING_SOUTH) return 7204;
  if (facing == FACING_WEST) return 7205;
  if (facing == FACING_EAST) return 7206;
  return 7203;
}
