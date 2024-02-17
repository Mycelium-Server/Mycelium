

#include "redstone_block_block.h"

RedstoneBlockBlock::RedstoneBlockBlock() = default;
RedstoneBlockBlock::~RedstoneBlockBlock() = default;

short RedstoneBlockBlock::getId() const {
  return 7343;
}

std::shared_ptr<Block> RedstoneBlockBlock::clone() const {
  std::shared_ptr<RedstoneBlockBlock> copy = std::make_shared<RedstoneBlockBlock>();
  return copy;
}
