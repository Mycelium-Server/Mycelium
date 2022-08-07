#include "crimson_stem_block.h"

CrimsonStemBlock::CrimsonStemBlock() = default;
CrimsonStemBlock::~CrimsonStemBlock() = default;

short CrimsonStemBlock::getId() const {
  if (axis == AXIS_X) return 16184;
  if (axis == AXIS_Y) return 16185;
  if (axis == AXIS_Z) return 16186;
  return 16185;
}
