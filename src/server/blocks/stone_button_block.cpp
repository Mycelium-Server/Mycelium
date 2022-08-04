#include "stone_button_block.h"

StoneButtonBlock::StoneButtonBlock() = default;
StoneButtonBlock::~StoneButtonBlock() = default;

short StoneButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 4206;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 4207;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4208;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4209;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 4210;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 4211;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 4212;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 4213;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 4214;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 4215;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4216;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4217;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 4218;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 4219;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 4220;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 4221;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 4222;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 4223;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 4224;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 4225;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 4226;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 4227;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 4228;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 4229;
  return 4215;
}
