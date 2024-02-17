

#include "warped_stem_block.h"

WarpedStemBlock::WarpedStemBlock() = default;
WarpedStemBlock::~WarpedStemBlock() = default;

short WarpedStemBlock::getId() const {
  return 16167 + axis * 1;
}

std::shared_ptr<Block> WarpedStemBlock::clone() const {
  std::shared_ptr<WarpedStemBlock> copy = std::make_shared<WarpedStemBlock>();
  copy->axis = axis;
  return copy;
}
