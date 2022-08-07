#include "piston_block.h"

PistonBlock::PistonBlock() = default;
PistonBlock::~PistonBlock() = default;

short PistonBlock::getId() const {
  if (extended == EXTENDED_TRUE && facing == FACING_NORTH) return 1602;
  if (extended == EXTENDED_TRUE && facing == FACING_EAST) return 1603;
  if (extended == EXTENDED_TRUE && facing == FACING_SOUTH) return 1604;
  if (extended == EXTENDED_TRUE && facing == FACING_WEST) return 1605;
  if (extended == EXTENDED_TRUE && facing == FACING_UP) return 1606;
  if (extended == EXTENDED_TRUE && facing == FACING_DOWN) return 1607;
  if (extended == EXTENDED_FALSE && facing == FACING_NORTH) return 1608;
  if (extended == EXTENDED_FALSE && facing == FACING_EAST) return 1609;
  if (extended == EXTENDED_FALSE && facing == FACING_SOUTH) return 1610;
  if (extended == EXTENDED_FALSE && facing == FACING_WEST) return 1611;
  if (extended == EXTENDED_FALSE && facing == FACING_UP) return 1612;
  if (extended == EXTENDED_FALSE && facing == FACING_DOWN) return 1613;
  return 1608;
}
