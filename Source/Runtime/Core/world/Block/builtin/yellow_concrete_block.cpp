

#include "yellow_concrete_block.h"

YellowConcreteBlock::YellowConcreteBlock() = default;
YellowConcreteBlock::~YellowConcreteBlock() = default;

short YellowConcreteBlock::getId() const {
  return 10323;
}

std::shared_ptr<Block> YellowConcreteBlock::clone() const {
  std::shared_ptr<YellowConcreteBlock> copy = std::make_shared<YellowConcreteBlock>();
  return copy;
}
