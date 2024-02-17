

#include "blue_concrete_block.h"

BlueConcreteBlock::BlueConcreteBlock() = default;
BlueConcreteBlock::~BlueConcreteBlock() = default;

short BlueConcreteBlock::getId() const {
  return 10330;
}

std::shared_ptr<Block> BlueConcreteBlock::clone() const {
  std::shared_ptr<BlueConcreteBlock> copy = std::make_shared<BlueConcreteBlock>();
  return copy;
}
