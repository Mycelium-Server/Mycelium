#include "stripped_warped_stem_block.h"

StrippedWarpedStemBlock::StrippedWarpedStemBlock() = default;
StrippedWarpedStemBlock::~StrippedWarpedStemBlock() = default;

short StrippedWarpedStemBlock::getId() const {
  if (axis == AXIS_X) return 16170;
  if (axis == AXIS_Y) return 16171;
  if (axis == AXIS_Z) return 16172;
  return 16171;
}
