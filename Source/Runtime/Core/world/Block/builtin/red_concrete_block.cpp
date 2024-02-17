

#include "red_concrete_block.h"

RedConcreteBlock::RedConcreteBlock() = default;
RedConcreteBlock::~RedConcreteBlock() = default;

short RedConcreteBlock::getId() const {
  return 10333;
}

std::shared_ptr<Block> RedConcreteBlock::clone() const {
  std::shared_ptr<RedConcreteBlock> copy = std::make_shared<RedConcreteBlock>();
  return copy;
}
