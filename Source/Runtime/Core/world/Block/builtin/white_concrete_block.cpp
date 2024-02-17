

#include "white_concrete_block.h"

WhiteConcreteBlock::WhiteConcreteBlock() = default;
WhiteConcreteBlock::~WhiteConcreteBlock() = default;

short WhiteConcreteBlock::getId() const {
  return 10319;
}

std::shared_ptr<Block> WhiteConcreteBlock::clone() const {
  std::shared_ptr<WhiteConcreteBlock> copy = std::make_shared<WhiteConcreteBlock>();
  return copy;
}
