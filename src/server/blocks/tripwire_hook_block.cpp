#include "tripwire_hook_block.h"

TripwireHookBlock::TripwireHookBlock() = default;
TripwireHookBlock::~TripwireHookBlock() = default;

short TripwireHookBlock::getId() const {
  if (attached == ATTACHED_TRUE && facing == FACING_NORTH && powered == POWERED_TRUE) return 5851;
  if (attached == ATTACHED_TRUE && facing == FACING_NORTH && powered == POWERED_FALSE) return 5852;
  if (attached == ATTACHED_TRUE && facing == FACING_SOUTH && powered == POWERED_TRUE) return 5853;
  if (attached == ATTACHED_TRUE && facing == FACING_SOUTH && powered == POWERED_FALSE) return 5854;
  if (attached == ATTACHED_TRUE && facing == FACING_WEST && powered == POWERED_TRUE) return 5855;
  if (attached == ATTACHED_TRUE && facing == FACING_WEST && powered == POWERED_FALSE) return 5856;
  if (attached == ATTACHED_TRUE && facing == FACING_EAST && powered == POWERED_TRUE) return 5857;
  if (attached == ATTACHED_TRUE && facing == FACING_EAST && powered == POWERED_FALSE) return 5858;
  if (attached == ATTACHED_FALSE && facing == FACING_NORTH && powered == POWERED_TRUE) return 5859;
  if (attached == ATTACHED_FALSE && facing == FACING_NORTH && powered == POWERED_FALSE) return 5860;
  if (attached == ATTACHED_FALSE && facing == FACING_SOUTH && powered == POWERED_TRUE) return 5861;
  if (attached == ATTACHED_FALSE && facing == FACING_SOUTH && powered == POWERED_FALSE) return 5862;
  if (attached == ATTACHED_FALSE && facing == FACING_WEST && powered == POWERED_TRUE) return 5863;
  if (attached == ATTACHED_FALSE && facing == FACING_WEST && powered == POWERED_FALSE) return 5864;
  if (attached == ATTACHED_FALSE && facing == FACING_EAST && powered == POWERED_TRUE) return 5865;
  if (attached == ATTACHED_FALSE && facing == FACING_EAST && powered == POWERED_FALSE) return 5866;
  return 5860;
}
