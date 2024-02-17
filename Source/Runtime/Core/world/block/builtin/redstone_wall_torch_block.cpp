

#include "redstone_wall_torch_block.h"

RedstoneWallTorchBlock::RedstoneWallTorchBlock() = default;
RedstoneWallTorchBlock::~RedstoneWallTorchBlock() = default;

short RedstoneWallTorchBlock::getId() const {
  return 4198 + lit * 1 + facing * 2;
}

std::shared_ptr<Block> RedstoneWallTorchBlock::clone() const {
  std::shared_ptr<RedstoneWallTorchBlock> copy = std::make_shared<RedstoneWallTorchBlock>();
  copy->facing = facing;
  copy->lit = lit;
  return copy;
}
