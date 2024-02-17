

#include "deepslate_redstone_ore_block.h"

DeepslateRedstoneOreBlock::DeepslateRedstoneOreBlock() = default;
DeepslateRedstoneOreBlock::~DeepslateRedstoneOreBlock() = default;

short DeepslateRedstoneOreBlock::getId() const {
  return 4194 + lit * 1;
}

std::shared_ptr<Block> DeepslateRedstoneOreBlock::clone() const {
  std::shared_ptr<DeepslateRedstoneOreBlock> copy = std::make_shared<DeepslateRedstoneOreBlock>();
  copy->lit = lit;
  return copy;
}
