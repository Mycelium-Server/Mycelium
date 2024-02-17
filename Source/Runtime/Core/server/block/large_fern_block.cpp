

#include "large_fern_block.h"

LargeFernBlock::LargeFernBlock() = default;
LargeFernBlock::~LargeFernBlock() = default;

short LargeFernBlock::getId() const {
  return 8636 + half * 1;
}

std::shared_ptr<Block> LargeFernBlock::clone() const {
  std::shared_ptr<LargeFernBlock> copy = std::make_shared<LargeFernBlock>();
  copy->half = half;
  return copy;
}
