

#include "ochre_froglight_block.h"

OchreFroglightBlock::OchreFroglightBlock() = default;
OchreFroglightBlock::~OchreFroglightBlock() = default;

short OchreFroglightBlock::getId() const {
  return 21437 + axis * 1;
}

std::shared_ptr<Block> OchreFroglightBlock::clone() const {
  std::shared_ptr<OchreFroglightBlock> copy = std::make_shared<OchreFroglightBlock>();
  copy->axis = axis;
  return copy;
}
