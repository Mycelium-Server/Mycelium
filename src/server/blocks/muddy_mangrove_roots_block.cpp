#include "muddy_mangrove_roots_block.h"

MuddyMangroveRootsBlock::MuddyMangroveRootsBlock() = default;
MuddyMangroveRootsBlock::~MuddyMangroveRootsBlock() = default;

short MuddyMangroveRootsBlock::getId() const {
  if (axis == AXIS_X) return 140;
  if (axis == AXIS_Y) return 141;
  if (axis == AXIS_Z) return 142;
  return 141;
}
