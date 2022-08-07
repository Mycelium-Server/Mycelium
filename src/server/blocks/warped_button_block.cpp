#include "warped_button_block.h"

WarpedButtonBlock::WarpedButtonBlock() = default;
WarpedButtonBlock::~WarpedButtonBlock() = default;

short WarpedButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 16712;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 16713;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16714;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16715;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 16716;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 16717;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 16718;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 16719;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 16720;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 16721;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16722;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16723;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 16724;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 16725;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 16726;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 16727;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 16728;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 16729;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16730;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16731;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 16732;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 16733;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 16734;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 16735;
  return 16721;
}
