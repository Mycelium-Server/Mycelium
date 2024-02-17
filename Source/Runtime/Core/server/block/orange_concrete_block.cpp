

#include "orange_concrete_block.h"

OrangeConcreteBlock::OrangeConcreteBlock() = default;
OrangeConcreteBlock::~OrangeConcreteBlock() = default;

short OrangeConcreteBlock::getId() const {
  return 10320;
}

std::shared_ptr<Block> OrangeConcreteBlock::clone() const {
  std::shared_ptr<OrangeConcreteBlock> copy = std::make_shared<OrangeConcreteBlock>();
  return copy;
}
