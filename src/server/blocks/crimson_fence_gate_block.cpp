#include "crimson_fence_gate_block.h"

CrimsonFenceGateBlock::CrimsonFenceGateBlock() = default;
CrimsonFenceGateBlock::~CrimsonFenceGateBlock() = default;

short CrimsonFenceGateBlock::getId() const {
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16464;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16465;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16466;
  if (facing == FACING_NORTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16467;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16468;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16469;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16470;
  if (facing == FACING_NORTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16471;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16472;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16473;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16474;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16475;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16476;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16477;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16478;
  if (facing == FACING_SOUTH && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16479;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16480;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16481;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16482;
  if (facing == FACING_WEST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16483;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16484;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16485;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16486;
  if (facing == FACING_WEST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16487;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16488;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16489;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16490;
  if (facing == FACING_EAST && in_wall == IN_WALL_TRUE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16491;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_TRUE) return 16492;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_TRUE && powered == POWERED_FALSE) return 16493;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_TRUE) return 16494;
  if (facing == FACING_EAST && in_wall == IN_WALL_FALSE && open == OPEN_FALSE && powered == POWERED_FALSE) return 16495;
  return 16471;
}
