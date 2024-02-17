

#include "tnt_block.h"

TntBlock::TntBlock() = default;
TntBlock::~TntBlock() = default;

short TntBlock::getId() const {
  return 1684 + unstable * 1;
}

std::shared_ptr<Block> TntBlock::clone() const {
  std::shared_ptr<TntBlock> copy = std::make_shared<TntBlock>();
  copy->unstable = unstable;
  return copy;
}
