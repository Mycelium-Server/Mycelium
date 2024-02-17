

#include "barrier_block.h"

BarrierBlock::BarrierBlock() = default;
BarrierBlock::~BarrierBlock() = default;

short BarrierBlock::getId() const {
  return 8245;
}

std::shared_ptr<Block> BarrierBlock::clone() const {
  std::shared_ptr<BarrierBlock> copy = std::make_shared<BarrierBlock>();
  return copy;
}
