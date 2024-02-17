

#include "red_sandstone_slab_block.h"

RedSandstoneSlabBlock::RedSandstoneSlabBlock() = default;
RedSandstoneSlabBlock::~RedSandstoneSlabBlock() = default;

short RedSandstoneSlabBlock::getId() const {
  return 9149 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> RedSandstoneSlabBlock::clone() const {
  std::shared_ptr<RedSandstoneSlabBlock> copy = std::make_shared<RedSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
