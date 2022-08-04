#include "hopper_block.h"

HopperBlock::HopperBlock() = default;
HopperBlock::~HopperBlock() = default;

short HopperBlock::getId() const {
  if (enabled == ENABLED_TRUE && facing == FACING_DOWN) return 7345;
  if (enabled == ENABLED_TRUE && facing == FACING_NORTH) return 7346;
  if (enabled == ENABLED_TRUE && facing == FACING_SOUTH) return 7347;
  if (enabled == ENABLED_TRUE && facing == FACING_WEST) return 7348;
  if (enabled == ENABLED_TRUE && facing == FACING_EAST) return 7349;
  if (enabled == ENABLED_FALSE && facing == FACING_DOWN) return 7350;
  if (enabled == ENABLED_FALSE && facing == FACING_NORTH) return 7351;
  if (enabled == ENABLED_FALSE && facing == FACING_SOUTH) return 7352;
  if (enabled == ENABLED_FALSE && facing == FACING_WEST) return 7353;
  if (enabled == ENABLED_FALSE && facing == FACING_EAST) return 7354;
  return 7345;
}
