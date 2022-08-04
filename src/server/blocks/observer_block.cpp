#include "observer_block.h"

ObserverBlock::ObserverBlock() = default;
ObserverBlock::~ObserverBlock() = default;

short ObserverBlock::getId() const {
  if (facing == FACING_NORTH && powered == POWERED_TRUE) return 10141;
  if (facing == FACING_NORTH && powered == POWERED_FALSE) return 10142;
  if (facing == FACING_EAST && powered == POWERED_TRUE) return 10143;
  if (facing == FACING_EAST && powered == POWERED_FALSE) return 10144;
  if (facing == FACING_SOUTH && powered == POWERED_TRUE) return 10145;
  if (facing == FACING_SOUTH && powered == POWERED_FALSE) return 10146;
  if (facing == FACING_WEST && powered == POWERED_TRUE) return 10147;
  if (facing == FACING_WEST && powered == POWERED_FALSE) return 10148;
  if (facing == FACING_UP && powered == POWERED_TRUE) return 10149;
  if (facing == FACING_UP && powered == POWERED_FALSE) return 10150;
  if (facing == FACING_DOWN && powered == POWERED_TRUE) return 10151;
  if (facing == FACING_DOWN && powered == POWERED_FALSE) return 10152;
  return 10146;
}
