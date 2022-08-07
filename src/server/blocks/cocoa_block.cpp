#include "cocoa_block.h"

CocoaBlock::CocoaBlock() = default;
CocoaBlock::~CocoaBlock() = default;

short CocoaBlock::getId() const {
  if (age == AGE_0 && facing == FACING_NORTH) return 5749;
  if (age == AGE_0 && facing == FACING_SOUTH) return 5750;
  if (age == AGE_0 && facing == FACING_WEST) return 5751;
  if (age == AGE_0 && facing == FACING_EAST) return 5752;
  if (age == AGE_1 && facing == FACING_NORTH) return 5753;
  if (age == AGE_1 && facing == FACING_SOUTH) return 5754;
  if (age == AGE_1 && facing == FACING_WEST) return 5755;
  if (age == AGE_1 && facing == FACING_EAST) return 5756;
  if (age == AGE_2 && facing == FACING_NORTH) return 5757;
  if (age == AGE_2 && facing == FACING_SOUTH) return 5758;
  if (age == AGE_2 && facing == FACING_WEST) return 5759;
  if (age == AGE_2 && facing == FACING_EAST) return 5760;
  return 5749;
}
