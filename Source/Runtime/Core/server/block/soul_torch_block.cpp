

#include "soul_torch_block.h"

SoulTorchBlock::SoulTorchBlock() = default;
SoulTorchBlock::~SoulTorchBlock() = default;

short SoulTorchBlock::getId() const {
  return 4317;
}

std::shared_ptr<Block> SoulTorchBlock::clone() const {
  std::shared_ptr<SoulTorchBlock> copy = std::make_shared<SoulTorchBlock>();
  return copy;
}
