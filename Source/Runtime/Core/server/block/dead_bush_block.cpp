

#include "dead_bush_block.h"

DeadBushBlock::DeadBushBlock() = default;
DeadBushBlock::~DeadBushBlock() = default;

short DeadBushBlock::getId() const {
  return 1598;
}

std::shared_ptr<Block> DeadBushBlock::clone() const {
  std::shared_ptr<DeadBushBlock> copy = std::make_shared<DeadBushBlock>();
  return copy;
}
