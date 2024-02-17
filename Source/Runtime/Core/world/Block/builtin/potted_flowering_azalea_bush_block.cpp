

#include "potted_flowering_azalea_bush_block.h"

PottedFloweringAzaleaBushBlock::PottedFloweringAzaleaBushBlock() = default;
PottedFloweringAzaleaBushBlock::~PottedFloweringAzaleaBushBlock() = default;

short PottedFloweringAzaleaBushBlock::getId() const {
  return 21436;
}

std::shared_ptr<Block> PottedFloweringAzaleaBushBlock::clone() const {
  std::shared_ptr<PottedFloweringAzaleaBushBlock> copy = std::make_shared<PottedFloweringAzaleaBushBlock>();
  return copy;
}
