#include "redstone_ore_block.h"

RedstoneOreBlock::RedstoneOreBlock() = default;
RedstoneOreBlock::~RedstoneOreBlock() = default;

short RedstoneOreBlock::getId() const {
  if (lit == LIT_TRUE) return 4192;
  if (lit == LIT_FALSE) return 4193;
  return 4193;
}
