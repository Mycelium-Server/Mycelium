

#include "cyan_concrete_block.h"

CyanConcreteBlock::CyanConcreteBlock() = default;
CyanConcreteBlock::~CyanConcreteBlock() = default;

short CyanConcreteBlock::getId() const {
  return 10328;
}

std::shared_ptr<Block> CyanConcreteBlock::clone() const {
  std::shared_ptr<CyanConcreteBlock> copy = std::make_shared<CyanConcreteBlock>();
  return copy;
}
