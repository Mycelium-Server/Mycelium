

#include "green_concrete_block.h"

GreenConcreteBlock::GreenConcreteBlock() = default;
GreenConcreteBlock::~GreenConcreteBlock() = default;

short GreenConcreteBlock::getId() const {
  return 10332;
}

std::shared_ptr<Block> GreenConcreteBlock::clone() const {
  std::shared_ptr<GreenConcreteBlock> copy = std::make_shared<GreenConcreteBlock>();
  return copy;
}
