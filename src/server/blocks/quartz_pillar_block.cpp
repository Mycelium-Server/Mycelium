#include "quartz_pillar_block.h"

QuartzPillarBlock::QuartzPillarBlock() = default;
QuartzPillarBlock::~QuartzPillarBlock() = default;

short QuartzPillarBlock::getId() const {
  if (axis == AXIS_X) return 7357;
  if (axis == AXIS_Y) return 7358;
  if (axis == AXIS_Z) return 7359;
  return 7358;
}
