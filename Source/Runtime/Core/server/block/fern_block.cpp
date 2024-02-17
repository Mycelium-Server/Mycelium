

#include "fern_block.h"

FernBlock::FernBlock() = default;
FernBlock::~FernBlock() = default;

short FernBlock::getId() const {
  return 1597;
}

std::shared_ptr<Block> FernBlock::clone() const {
  std::shared_ptr<FernBlock> copy = std::make_shared<FernBlock>();
  return copy;
}
