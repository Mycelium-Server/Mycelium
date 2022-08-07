#include "purpur_pillar_block.h"

PurpurPillarBlock::PurpurPillarBlock() = default;
PurpurPillarBlock::~PurpurPillarBlock() = default;

short PurpurPillarBlock::getId() const {
  if (axis == AXIS_X) return 10016;
  if (axis == AXIS_Y) return 10017;
  if (axis == AXIS_Z) return 10018;
  return 10017;
}
