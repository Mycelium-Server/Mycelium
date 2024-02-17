

#include "potted_poppy_block.h"

PottedPoppyBlock::PottedPoppyBlock() = default;
PottedPoppyBlock::~PottedPoppyBlock() = default;

short PottedPoppyBlock::getId() const {
  return 6907;
}

std::shared_ptr<Block> PottedPoppyBlock::clone() const {
  std::shared_ptr<PottedPoppyBlock> copy = std::make_shared<PottedPoppyBlock>();
  return copy;
}
