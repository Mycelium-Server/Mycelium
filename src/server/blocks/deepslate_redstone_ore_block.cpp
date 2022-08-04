#include "deepslate_redstone_ore_block.h"

DeepslateRedstoneOreBlock::DeepslateRedstoneOreBlock() = default;
DeepslateRedstoneOreBlock::~DeepslateRedstoneOreBlock() = default;

short DeepslateRedstoneOreBlock::getId() const {
  if (lit == LIT_TRUE) return 4194;
  if (lit == LIT_FALSE) return 4195;
  return 4195;
}
