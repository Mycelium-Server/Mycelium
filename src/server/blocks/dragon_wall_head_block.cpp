#include "dragon_wall_head_block.h"

DragonWallHeadBlock::DragonWallHeadBlock() = default;
DragonWallHeadBlock::~DragonWallHeadBlock() = default;

short DragonWallHeadBlock::getId() const {
  if (facing == FACING_NORTH) return 7223;
  if (facing == FACING_SOUTH) return 7224;
  if (facing == FACING_WEST) return 7225;
  if (facing == FACING_EAST) return 7226;
  return 7223;
}
