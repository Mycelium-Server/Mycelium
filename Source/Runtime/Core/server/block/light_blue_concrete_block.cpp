

#include "light_blue_concrete_block.h"

LightBlueConcreteBlock::LightBlueConcreteBlock() = default;
LightBlueConcreteBlock::~LightBlueConcreteBlock() = default;

short LightBlueConcreteBlock::getId() const {
  return 10322;
}

std::shared_ptr<Block> LightBlueConcreteBlock::clone() const {
  std::shared_ptr<LightBlueConcreteBlock> copy = std::make_shared<LightBlueConcreteBlock>();
  return copy;
}
