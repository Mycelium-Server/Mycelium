#include "deepslate_block.h"

DeepslateBlock::DeepslateBlock() = default;
DeepslateBlock::~DeepslateBlock() = default;

short DeepslateBlock::getId() const {
  if (axis == AXIS_X) return 19778;
  if (axis == AXIS_Y) return 19779;
  if (axis == AXIS_Z) return 19780;
  return 19779;
}
