

#include "pink_wool_block.h"

PinkWoolBlock::PinkWoolBlock() = default;
PinkWoolBlock::~PinkWoolBlock() = default;

short PinkWoolBlock::getId() const {
  return 1644;
}

std::shared_ptr<Block> PinkWoolBlock::clone() const {
  std::shared_ptr<PinkWoolBlock> copy = std::make_shared<PinkWoolBlock>();
  return copy;
}
