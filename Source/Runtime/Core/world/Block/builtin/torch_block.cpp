

#include "torch_block.h"

TorchBlock::TorchBlock() = default;
TorchBlock::~TorchBlock() = default;

short TorchBlock::getId() const {
  return 1689;
}

std::shared_ptr<Block> TorchBlock::clone() const {
  std::shared_ptr<TorchBlock> copy = std::make_shared<TorchBlock>();
  return copy;
}
