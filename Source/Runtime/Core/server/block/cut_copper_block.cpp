

#include "cut_copper_block.h"

CutCopperBlock::CutCopperBlock() = default;
CutCopperBlock::~CutCopperBlock() = default;

short CutCopperBlock::getId() const {
  return 18917;
}

std::shared_ptr<Block> CutCopperBlock::clone() const {
  std::shared_ptr<CutCopperBlock> copy = std::make_shared<CutCopperBlock>();
  return copy;
}
