

#include "black_concrete_block.h"

BlackConcreteBlock::BlackConcreteBlock() = default;
BlackConcreteBlock::~BlackConcreteBlock() = default;

short BlackConcreteBlock::getId() const {
  return 10334;
}

std::shared_ptr<Block> BlackConcreteBlock::clone() const {
  std::shared_ptr<BlackConcreteBlock> copy = std::make_shared<BlackConcreteBlock>();
  return copy;
}
