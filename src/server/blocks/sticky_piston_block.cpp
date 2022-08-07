#include "sticky_piston_block.h"

StickyPistonBlock::StickyPistonBlock() = default;
StickyPistonBlock::~StickyPistonBlock() = default;

short StickyPistonBlock::getId() const {
  if (extended == EXTENDED_TRUE && facing == FACING_NORTH) return 1583;
  if (extended == EXTENDED_TRUE && facing == FACING_EAST) return 1584;
  if (extended == EXTENDED_TRUE && facing == FACING_SOUTH) return 1585;
  if (extended == EXTENDED_TRUE && facing == FACING_WEST) return 1586;
  if (extended == EXTENDED_TRUE && facing == FACING_UP) return 1587;
  if (extended == EXTENDED_TRUE && facing == FACING_DOWN) return 1588;
  if (extended == EXTENDED_FALSE && facing == FACING_NORTH) return 1589;
  if (extended == EXTENDED_FALSE && facing == FACING_EAST) return 1590;
  if (extended == EXTENDED_FALSE && facing == FACING_SOUTH) return 1591;
  if (extended == EXTENDED_FALSE && facing == FACING_WEST) return 1592;
  if (extended == EXTENDED_FALSE && facing == FACING_UP) return 1593;
  if (extended == EXTENDED_FALSE && facing == FACING_DOWN) return 1594;
  return 1589;
}
