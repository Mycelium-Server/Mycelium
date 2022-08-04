#include "stripped_crimson_stem_block.h"

StrippedCrimsonStemBlock::StrippedCrimsonStemBlock() = default;
StrippedCrimsonStemBlock::~StrippedCrimsonStemBlock() = default;

short StrippedCrimsonStemBlock::getId() const {
  if (axis == AXIS_X) return 16187;
  if (axis == AXIS_Y) return 16188;
  if (axis == AXIS_Z) return 16189;
  return 16188;
}
