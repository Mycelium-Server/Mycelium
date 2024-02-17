

#include "peony_block.h"

PeonyBlock::PeonyBlock() = default;
PeonyBlock::~PeonyBlock() = default;

short PeonyBlock::getId() const {
  return 8632 + half * 1;
}

std::shared_ptr<Block> PeonyBlock::clone() const {
  std::shared_ptr<PeonyBlock> copy = std::make_shared<PeonyBlock>();
  copy->half = half;
  return copy;
}
