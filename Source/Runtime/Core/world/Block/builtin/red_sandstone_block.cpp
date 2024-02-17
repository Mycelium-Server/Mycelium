

#include "red_sandstone_block.h"

RedSandstoneBlock::RedSandstoneBlock() = default;
RedSandstoneBlock::~RedSandstoneBlock() = default;

short RedSandstoneBlock::getId() const {
  return 8958;
}

std::shared_ptr<Block> RedSandstoneBlock::clone() const {
  std::shared_ptr<RedSandstoneBlock> copy = std::make_shared<RedSandstoneBlock>();
  return copy;
}
