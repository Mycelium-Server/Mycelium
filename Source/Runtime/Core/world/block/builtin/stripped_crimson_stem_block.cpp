

#include "stripped_crimson_stem_block.h"

StrippedCrimsonStemBlock::StrippedCrimsonStemBlock() = default;
StrippedCrimsonStemBlock::~StrippedCrimsonStemBlock() = default;

short StrippedCrimsonStemBlock::getId() const {
  return 16187 + axis * 1;
}

std::shared_ptr<Block> StrippedCrimsonStemBlock::clone() const {
  std::shared_ptr<StrippedCrimsonStemBlock> copy = std::make_shared<StrippedCrimsonStemBlock>();
  copy->axis = axis;
  return copy;
}
