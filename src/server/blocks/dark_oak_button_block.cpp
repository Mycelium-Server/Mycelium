#include "dark_oak_button_block.h"

DarkOakButtonBlock::DarkOakButtonBlock() = default;
DarkOakButtonBlock::~DarkOakButtonBlock() = default;

short DarkOakButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 7059;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 7060;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7061;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7062;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 7063;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 7064;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 7065;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 7066;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 7067;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 7068;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7069;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7070;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 7071;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 7072;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 7073;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 7074;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 7075;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 7076;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7077;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7078;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 7079;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 7080;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 7081;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 7082;
  return 7068;
}
