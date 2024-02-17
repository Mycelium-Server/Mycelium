

#include "brown_concrete_block.h"

BrownConcreteBlock::BrownConcreteBlock() = default;
BrownConcreteBlock::~BrownConcreteBlock() = default;

short BrownConcreteBlock::getId() const {
  return 10331;
}

std::shared_ptr<Block> BrownConcreteBlock::clone() const {
  std::shared_ptr<BrownConcreteBlock> copy = std::make_shared<BrownConcreteBlock>();
  return copy;
}
