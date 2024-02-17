

#include "poppy_block.h"

PoppyBlock::PoppyBlock() = default;
PoppyBlock::~PoppyBlock() = default;

short PoppyBlock::getId() const {
  return 1667;
}

std::shared_ptr<Block> PoppyBlock::clone() const {
  std::shared_ptr<PoppyBlock> copy = std::make_shared<PoppyBlock>();
  return copy;
}
