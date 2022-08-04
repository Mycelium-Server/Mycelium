#include "infested_deepslate_block.h"

InfestedDeepslateBlock::InfestedDeepslateBlock() = default;
InfestedDeepslateBlock::~InfestedDeepslateBlock() = default;

short InfestedDeepslateBlock::getId() const {
  if (axis == AXIS_X) return 21428;
  if (axis == AXIS_Y) return 21429;
  if (axis == AXIS_Z) return 21430;
  return 21429;
}
