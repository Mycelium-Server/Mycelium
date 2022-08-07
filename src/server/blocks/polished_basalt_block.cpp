#include "polished_basalt_block.h"

PolishedBasaltBlock::PolishedBasaltBlock() = default;
PolishedBasaltBlock::~PolishedBasaltBlock() = default;

short PolishedBasaltBlock::getId() const {
  if (axis == AXIS_X) return 4314;
  if (axis == AXIS_Y) return 4315;
  if (axis == AXIS_Z) return 4316;
  return 4315;
}
