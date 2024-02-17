

#include "purple_concrete_block.h"

PurpleConcreteBlock::PurpleConcreteBlock() = default;
PurpleConcreteBlock::~PurpleConcreteBlock() = default;

short PurpleConcreteBlock::getId() const {
  return 10329;
}

std::shared_ptr<Block> PurpleConcreteBlock::clone() const {
  std::shared_ptr<PurpleConcreteBlock> copy = std::make_shared<PurpleConcreteBlock>();
  return copy;
}
