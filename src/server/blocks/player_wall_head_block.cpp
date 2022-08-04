#include "player_wall_head_block.h"

PlayerWallHeadBlock::PlayerWallHeadBlock() = default;
PlayerWallHeadBlock::~PlayerWallHeadBlock() = default;

short PlayerWallHeadBlock::getId() const {
  if (facing == FACING_NORTH) return 7183;
  if (facing == FACING_SOUTH) return 7184;
  if (facing == FACING_WEST) return 7185;
  if (facing == FACING_EAST) return 7186;
  return 7183;
}
