

#include "redstone_ore_block.h"

RedstoneOreBlock::RedstoneOreBlock() = default;
RedstoneOreBlock::~RedstoneOreBlock() = default;

short RedstoneOreBlock::getId() const {
  return 4192 + lit * 1;
}

std::shared_ptr<Block> RedstoneOreBlock::clone() const {
  std::shared_ptr<RedstoneOreBlock> copy = std::make_shared<RedstoneOreBlock>();
  copy->lit = lit;
  return copy;
}
