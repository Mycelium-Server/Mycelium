#include "redstone_torch_block.h"

RedstoneTorchBlock::RedstoneTorchBlock() = default;
RedstoneTorchBlock::~RedstoneTorchBlock() = default;

short RedstoneTorchBlock::getId() const {
  if (lit == LIT_TRUE) return 4196;
  if (lit == LIT_FALSE) return 4197;
  return 4196;
}
