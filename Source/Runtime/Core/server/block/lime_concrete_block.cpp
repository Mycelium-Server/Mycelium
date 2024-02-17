

#include "lime_concrete_block.h"

LimeConcreteBlock::LimeConcreteBlock() = default;
LimeConcreteBlock::~LimeConcreteBlock() = default;

short LimeConcreteBlock::getId() const {
  return 10324;
}

std::shared_ptr<Block> LimeConcreteBlock::clone() const {
  std::shared_ptr<LimeConcreteBlock> copy = std::make_shared<LimeConcreteBlock>();
  return copy;
}
