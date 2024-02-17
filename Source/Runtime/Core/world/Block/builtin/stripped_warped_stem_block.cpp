

#include "stripped_warped_stem_block.h"

StrippedWarpedStemBlock::StrippedWarpedStemBlock() = default;
StrippedWarpedStemBlock::~StrippedWarpedStemBlock() = default;

short StrippedWarpedStemBlock::getId() const {
  return 16170 + axis * 1;
}

std::shared_ptr<Block> StrippedWarpedStemBlock::clone() const {
  std::shared_ptr<StrippedWarpedStemBlock> copy = std::make_shared<StrippedWarpedStemBlock>();
  copy->axis = axis;
  return copy;
}
