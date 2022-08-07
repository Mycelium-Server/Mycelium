#include "carved_pumpkin_block.h"

CarvedPumpkinBlock::CarvedPumpkinBlock() = default;
CarvedPumpkinBlock::~CarvedPumpkinBlock() = default;

short CarvedPumpkinBlock::getId() const {
  if (facing == FACING_NORTH) return 4325;
  if (facing == FACING_SOUTH) return 4326;
  if (facing == FACING_WEST) return 4327;
  if (facing == FACING_EAST) return 4328;
  return 4325;
}
