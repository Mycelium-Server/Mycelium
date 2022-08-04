#include "skeleton_wall_skull_block.h"

SkeletonWallSkullBlock::SkeletonWallSkullBlock() = default;
SkeletonWallSkullBlock::~SkeletonWallSkullBlock() = default;

short SkeletonWallSkullBlock::getId() const {
  if (facing == FACING_NORTH) return 7123;
  if (facing == FACING_SOUTH) return 7124;
  if (facing == FACING_WEST) return 7125;
  if (facing == FACING_EAST) return 7126;
  return 7123;
}
