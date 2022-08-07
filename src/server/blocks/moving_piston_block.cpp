#include "moving_piston_block.h"

MovingPistonBlock::MovingPistonBlock() = default;
MovingPistonBlock::~MovingPistonBlock() = default;

short MovingPistonBlock::getId() const {
  if (type == TYPE_NORMAL && facing == FACING_NORTH) return 1654;
  if (type == TYPE_STICKY && facing == FACING_NORTH) return 1655;
  if (type == TYPE_NORMAL && facing == FACING_EAST) return 1656;
  if (type == TYPE_STICKY && facing == FACING_EAST) return 1657;
  if (type == TYPE_NORMAL && facing == FACING_SOUTH) return 1658;
  if (type == TYPE_STICKY && facing == FACING_SOUTH) return 1659;
  if (type == TYPE_NORMAL && facing == FACING_WEST) return 1660;
  if (type == TYPE_STICKY && facing == FACING_WEST) return 1661;
  if (type == TYPE_NORMAL && facing == FACING_UP) return 1662;
  if (type == TYPE_STICKY && facing == FACING_UP) return 1663;
  if (type == TYPE_NORMAL && facing == FACING_DOWN) return 1664;
  if (type == TYPE_STICKY && facing == FACING_DOWN) return 1665;
  return 1654;
}
