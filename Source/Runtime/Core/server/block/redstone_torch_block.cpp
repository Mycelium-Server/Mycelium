

#include "redstone_torch_block.h"

RedstoneTorchBlock::RedstoneTorchBlock() = default;
RedstoneTorchBlock::~RedstoneTorchBlock() = default;

short RedstoneTorchBlock::getId() const {
  return 4196 + lit * 1;
}

std::shared_ptr<Block> RedstoneTorchBlock::clone() const {
  std::shared_ptr<RedstoneTorchBlock> copy = std::make_shared<RedstoneTorchBlock>();
  copy->lit = lit;
  return copy;
}
