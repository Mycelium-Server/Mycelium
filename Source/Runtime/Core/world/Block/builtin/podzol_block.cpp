

#include "podzol_block.h"

PodzolBlock::PodzolBlock() = default;
PodzolBlock::~PodzolBlock() = default;

short PodzolBlock::getId() const {
  return 12 + snowy * 1;
}

std::shared_ptr<Block> PodzolBlock::clone() const {
  std::shared_ptr<PodzolBlock> copy = std::make_shared<PodzolBlock>();
  copy->snowy = snowy;
  return copy;
}
