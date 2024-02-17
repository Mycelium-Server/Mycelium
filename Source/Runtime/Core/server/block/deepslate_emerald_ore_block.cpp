

#include "deepslate_emerald_ore_block.h"

DeepslateEmeraldOreBlock::DeepslateEmeraldOreBlock() = default;
DeepslateEmeraldOreBlock::~DeepslateEmeraldOreBlock() = default;

short DeepslateEmeraldOreBlock::getId() const {
  return 5842;
}

std::shared_ptr<Block> DeepslateEmeraldOreBlock::clone() const {
  std::shared_ptr<DeepslateEmeraldOreBlock> copy = std::make_shared<DeepslateEmeraldOreBlock>();
  return copy;
}
