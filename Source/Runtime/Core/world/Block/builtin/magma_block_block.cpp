

#include "magma_block_block.h"

MagmaBlockBlock::MagmaBlockBlock() = default;
MagmaBlockBlock::~MagmaBlockBlock() = default;

short MagmaBlockBlock::getId() const {
  return 10134;
}

std::shared_ptr<Block> MagmaBlockBlock::clone() const {
  std::shared_ptr<MagmaBlockBlock> copy = std::make_shared<MagmaBlockBlock>();
  return copy;
}
