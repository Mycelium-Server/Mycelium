

#include "potted_azalea_bush_block.h"

PottedAzaleaBushBlock::PottedAzaleaBushBlock() = default;
PottedAzaleaBushBlock::~PottedAzaleaBushBlock() = default;

short PottedAzaleaBushBlock::getId() const {
  return 21435;
}

std::shared_ptr<Block> PottedAzaleaBushBlock::clone() const {
  std::shared_ptr<PottedAzaleaBushBlock> copy = std::make_shared<PottedAzaleaBushBlock>();
  return copy;
}
