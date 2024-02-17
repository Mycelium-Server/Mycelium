

#include "pumpkin_block.h"

PumpkinBlock::PumpkinBlock() = default;
PumpkinBlock::~PumpkinBlock() = default;

short PumpkinBlock::getId() const {
  return 4307;
}

std::shared_ptr<Block> PumpkinBlock::clone() const {
  std::shared_ptr<PumpkinBlock> copy = std::make_shared<PumpkinBlock>();
  return copy;
}
