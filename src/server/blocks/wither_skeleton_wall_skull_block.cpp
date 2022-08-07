#include "wither_skeleton_wall_skull_block.h"

WitherSkeletonWallSkullBlock::WitherSkeletonWallSkullBlock() = default;
WitherSkeletonWallSkullBlock::~WitherSkeletonWallSkullBlock() = default;

short WitherSkeletonWallSkullBlock::getId() const {
  if (facing == FACING_NORTH) return 7143;
  if (facing == FACING_SOUTH) return 7144;
  if (facing == FACING_WEST) return 7145;
  if (facing == FACING_EAST) return 7146;
  return 7143;
}
