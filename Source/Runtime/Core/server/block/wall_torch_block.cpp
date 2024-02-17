

#include "wall_torch_block.h"

WallTorchBlock::WallTorchBlock() = default;
WallTorchBlock::~WallTorchBlock() = default;

short WallTorchBlock::getId() const {
  return 1690 + facing * 1;
}

std::shared_ptr<Block> WallTorchBlock::clone() const {
  std::shared_ptr<WallTorchBlock> copy = std::make_shared<WallTorchBlock>();
  copy->facing = facing;
  return copy;
}
