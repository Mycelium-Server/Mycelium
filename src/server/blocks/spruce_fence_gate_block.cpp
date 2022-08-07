#include "spruce_fence_gate_block.h"

SpruceFenceGateBlock::SpruceFenceGateBlock() = default;
SpruceFenceGateBlock::~SpruceFenceGateBlock() = default;

short SpruceFenceGateBlock::getId() const {
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9171;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9172;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9173;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9174;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9175;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9176;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9177;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9178;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9179;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9180;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9181;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9182;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9183;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9184;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9185;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9186;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9187;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9188;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9189;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9190;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9191;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9192;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9193;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9194;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9195;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9196;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9197;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9198;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 9199;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 9200;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 9201;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 9202;
  return 9178;
}
