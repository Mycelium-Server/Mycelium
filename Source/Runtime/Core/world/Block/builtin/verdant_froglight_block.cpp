

#include "verdant_froglight_block.h"

VerdantFroglightBlock::VerdantFroglightBlock() = default;
VerdantFroglightBlock::~VerdantFroglightBlock() = default;

short VerdantFroglightBlock::getId() const {
  return 21440 + axis * 1;
}

std::shared_ptr<Block> VerdantFroglightBlock::clone() const {
  std::shared_ptr<VerdantFroglightBlock> copy = std::make_shared<VerdantFroglightBlock>();
  copy->axis = axis;
  return copy;
}
