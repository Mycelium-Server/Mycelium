

#include "gray_concrete_block.h"

GrayConcreteBlock::GrayConcreteBlock() = default;
GrayConcreteBlock::~GrayConcreteBlock() = default;

short GrayConcreteBlock::getId() const {
  return 10326;
}

std::shared_ptr<Block> GrayConcreteBlock::clone() const {
  std::shared_ptr<GrayConcreteBlock> copy = std::make_shared<GrayConcreteBlock>();
  return copy;
}
