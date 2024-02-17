

#include "crimson_stem_block.h"

CrimsonStemBlock::CrimsonStemBlock() = default;
CrimsonStemBlock::~CrimsonStemBlock() = default;

short CrimsonStemBlock::getId() const {
  return 16184 + axis * 1;
}

std::shared_ptr<Block> CrimsonStemBlock::clone() const {
  std::shared_ptr<CrimsonStemBlock> copy = std::make_shared<CrimsonStemBlock>();
  copy->axis = axis;
  return copy;
}
