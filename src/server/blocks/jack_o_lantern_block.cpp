#include "jack_o_lantern_block.h"

JackOLanternBlock::JackOLanternBlock() = default;
JackOLanternBlock::~JackOLanternBlock() = default;

short JackOLanternBlock::getId() const {
  if (facing == FACING_NORTH) return 4329;
  if (facing == FACING_SOUTH) return 4330;
  if (facing == FACING_WEST) return 4331;
  if (facing == FACING_EAST) return 4332;
  return 4329;
}
