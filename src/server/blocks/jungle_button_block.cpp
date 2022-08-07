#include "jungle_button_block.h"

JungleButtonBlock::JungleButtonBlock() = default;
JungleButtonBlock::~JungleButtonBlock() = default;

short JungleButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 7011;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 7012;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7013;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7014;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 7015;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 7016;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 7017;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 7018;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 7019;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 7020;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7021;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7022;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 7023;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 7024;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 7025;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 7026;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 7027;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 7028;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7029;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7030;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 7031;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 7032;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 7033;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 7034;
  return 7020;
}
