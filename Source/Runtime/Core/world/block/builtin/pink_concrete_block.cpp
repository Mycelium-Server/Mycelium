

#include "pink_concrete_block.h"

PinkConcreteBlock::PinkConcreteBlock() = default;
PinkConcreteBlock::~PinkConcreteBlock() = default;

short PinkConcreteBlock::getId() const {
  return 10325;
}

std::shared_ptr<Block> PinkConcreteBlock::clone() const {
  std::shared_ptr<PinkConcreteBlock> copy = std::make_shared<PinkConcreteBlock>();
  return copy;
}
