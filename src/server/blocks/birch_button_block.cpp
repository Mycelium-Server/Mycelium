#include "birch_button_block.h"

BirchButtonBlock::BirchButtonBlock() = default;
BirchButtonBlock::~BirchButtonBlock() = default;

short BirchButtonBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 6987;
  if (face == FACE_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 6988;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6989;
  if (face == FACE_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6990;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 6991;
  if (face == FACE_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 6992;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 6993;
  if (face == FACE_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 6994;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 6995;
  if (face == FACE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 6996;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 6997;
  if (face == FACE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 6998;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 6999;
  if (face == FACE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 7000;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 7001;
  if (face == FACE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 7002;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 7003;
  if (face == FACE_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 7004;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 7005;
  if (face == FACE_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 7006;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 7007;
  if (face == FACE_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 7008;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 7009;
  if (face == FACE_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 7010;
  return 6996;
}
