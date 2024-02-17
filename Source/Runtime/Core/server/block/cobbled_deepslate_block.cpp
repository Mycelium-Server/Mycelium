

#include "cobbled_deepslate_block.h"

CobbledDeepslateBlock::CobbledDeepslateBlock() = default;
CobbledDeepslateBlock::~CobbledDeepslateBlock() = default;

short CobbledDeepslateBlock::getId() const {
  return 19781;
}

std::shared_ptr<Block> CobbledDeepslateBlock::clone() const {
  std::shared_ptr<CobbledDeepslateBlock> copy = std::make_shared<CobbledDeepslateBlock>();
  return copy;
}
