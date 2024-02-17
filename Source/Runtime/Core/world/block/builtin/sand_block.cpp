

#include "sand_block.h"

SandBlock::SandBlock() = default;
SandBlock::~SandBlock() = default;

short SandBlock::getId() const {
  return 107;
}

std::shared_ptr<Block> SandBlock::clone() const {
  std::shared_ptr<SandBlock> copy = std::make_shared<SandBlock>();
  return copy;
}
