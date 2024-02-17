

#include "soul_wall_torch_block.h"

SoulWallTorchBlock::SoulWallTorchBlock() = default;
SoulWallTorchBlock::~SoulWallTorchBlock() = default;

short SoulWallTorchBlock::getId() const {
  return 4318 + facing * 1;
}

std::shared_ptr<Block> SoulWallTorchBlock::clone() const {
  std::shared_ptr<SoulWallTorchBlock> copy = std::make_shared<SoulWallTorchBlock>();
  copy->facing = facing;
  return copy;
}
