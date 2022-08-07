#include "dispenser_block.h"

DispenserBlock::DispenserBlock() = default;
DispenserBlock::~DispenserBlock() = default;

short DispenserBlock::getId() const {
  if (facing == FACING_NORTH && triggered == TRIGGERED_TRUE) return 464;
  if (facing == FACING_NORTH && triggered == TRIGGERED_FALSE) return 465;
  if (facing == FACING_EAST && triggered == TRIGGERED_TRUE) return 466;
  if (facing == FACING_EAST && triggered == TRIGGERED_FALSE) return 467;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_TRUE) return 468;
  if (facing == FACING_SOUTH && triggered == TRIGGERED_FALSE) return 469;
  if (facing == FACING_WEST && triggered == TRIGGERED_TRUE) return 470;
  if (facing == FACING_WEST && triggered == TRIGGERED_FALSE) return 471;
  if (facing == FACING_UP && triggered == TRIGGERED_TRUE) return 472;
  if (facing == FACING_UP && triggered == TRIGGERED_FALSE) return 473;
  if (facing == FACING_DOWN && triggered == TRIGGERED_TRUE) return 474;
  if (facing == FACING_DOWN && triggered == TRIGGERED_FALSE) return 475;
  return 465;
}
