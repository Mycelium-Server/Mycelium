

#include "gravel_block.h"

GravelBlock::GravelBlock() = default;
GravelBlock::~GravelBlock() = default;

short GravelBlock::getId() const {
  return 109;
}

std::shared_ptr<Block> GravelBlock::clone() const {
  std::shared_ptr<GravelBlock> copy = std::make_shared<GravelBlock>();
  return copy;
}
