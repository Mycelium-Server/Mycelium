

#include "cauldron_block.h"

CauldronBlock::CauldronBlock() = default;
CauldronBlock::~CauldronBlock() = default;

short CauldronBlock::getId() const {
  return 5728;
}

std::shared_ptr<Block> CauldronBlock::clone() const {
  std::shared_ptr<CauldronBlock> copy = std::make_shared<CauldronBlock>();
  return copy;
}
