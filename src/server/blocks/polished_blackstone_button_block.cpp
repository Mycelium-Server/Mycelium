#include "polished_blackstone_button_block.h"

PolishedBlackstoneButtonBlock::PolishedBlackstoneButtonBlock() = default;
PolishedBlackstoneButtonBlock::~PolishedBlackstoneButtonBlock() = default;

short PolishedBlackstoneButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 17962;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 17963;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 17964;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 17965;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 17966;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 17967;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 17968;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 17969;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 17970;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 17971;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 17972;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 17973;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 17974;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 17975;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 17976;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 17977;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 17978;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 17979;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 17980;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 17981;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 17982;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 17983;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 17984;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 17985;
  return 17971;
}
