#include "grindstone_block.h"

GrindstoneBlock::GrindstoneBlock() = default;
GrindstoneBlock::~GrindstoneBlock() = default;

short GrindstoneBlock::getId() const {
  if (face == FACE_FLOOR && facing == FACING_NORTH) return 16026;
  if (face == FACE_FLOOR && facing == FACING_SOUTH) return 16027;
  if (face == FACE_FLOOR && facing == FACING_WEST) return 16028;
  if (face == FACE_FLOOR && facing == FACING_EAST) return 16029;
  if (face == FACE_WALL && facing == FACING_NORTH) return 16030;
  if (face == FACE_WALL && facing == FACING_SOUTH) return 16031;
  if (face == FACE_WALL && facing == FACING_WEST) return 16032;
  if (face == FACE_WALL && facing == FACING_EAST) return 16033;
  if (face == FACE_CEILING && facing == FACING_NORTH) return 16034;
  if (face == FACE_CEILING && facing == FACING_SOUTH) return 16035;
  if (face == FACE_CEILING && facing == FACING_WEST) return 16036;
  if (face == FACE_CEILING && facing == FACING_EAST) return 16037;
  return 16030;
}
