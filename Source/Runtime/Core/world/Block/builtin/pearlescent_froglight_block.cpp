

#include "pearlescent_froglight_block.h"

PearlescentFroglightBlock::PearlescentFroglightBlock() = default;
PearlescentFroglightBlock::~PearlescentFroglightBlock() = default;

short PearlescentFroglightBlock::getId() const {
  return 21443 + axis * 1;
}

std::shared_ptr<Block> PearlescentFroglightBlock::clone() const {
  std::shared_ptr<PearlescentFroglightBlock> copy = std::make_shared<PearlescentFroglightBlock>();
  copy->axis = axis;
  return copy;
}
