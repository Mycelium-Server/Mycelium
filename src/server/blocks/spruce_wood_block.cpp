#include "spruce_wood_block.h"

SpruceWoodBlock::SpruceWoodBlock() = default;
SpruceWoodBlock::~SpruceWoodBlock() = default;

short SpruceWoodBlock::getId() const {
  if (axis == AXIS_X) return 167;
  if (axis == AXIS_Y) return 168;
  if (axis == AXIS_Z) return 169;
  return 168;
}
