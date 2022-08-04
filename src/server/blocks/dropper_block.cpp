#include "dropper_block.h"

DropperBlock::DropperBlock() = default;
DropperBlock::~DropperBlock() = default;

short DropperBlock::getId() const {
  if (facing == FACING_NORTH && triggered == TRIGGERED_TRUE) return 7464;
  if (facing == FACING_NORTH && triggered == TRIGGERED_FALSE) return 7465;
  if (facing == FACING_EAST && triggered == TRIGGERED_TRUE) return 7466;
  if (facing == FACING_EAST && triggered == TRIGGERED_FALSE) return 7467;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_TRUE) return 7468;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_FALSE) return 7469;
  if (facing == FACING_WEST && triggered == TRIGGERED_TRUE) return 7470;
  if (facing == FACING_WEST && triggered == TRIGGERED_FALSE) return 7471;
  if (facing == FACING_UP && triggered == TRIGGERED_TRUE) return 7472;
  if (facing == FACING_UP && triggered == TRIGGERED_FALSE) return 7473;
  if (facing == FACING_DOWN && triggered == TRIGGERED_TRUE) return 7474;
  if (facing == FACING_DOWN && triggered == TRIGGERED_FALSE) return 7475;
  return 7465;
}
