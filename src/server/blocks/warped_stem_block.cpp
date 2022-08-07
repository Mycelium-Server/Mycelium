#include "warped_stem_block.h"

WarpedStemBlock::WarpedStemBlock() = default;
WarpedStemBlock::~WarpedStemBlock() = default;

short WarpedStemBlock::getId() const {
  if (axis == AXIS_X) return 16167;
  if (axis == AXIS_Y) return 16168;
  if (axis == AXIS_Z) return 16169;
  return 16168;
}
