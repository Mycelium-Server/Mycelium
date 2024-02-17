

#include "smooth_sandstone_slab_block.h"

SmoothSandstoneSlabBlock::SmoothSandstoneSlabBlock() = default;
SmoothSandstoneSlabBlock::~SmoothSandstoneSlabBlock() = default;

short SmoothSandstoneSlabBlock::getId() const {
  return 11706 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SmoothSandstoneSlabBlock::clone() const {
  std::shared_ptr<SmoothSandstoneSlabBlock> copy = std::make_shared<SmoothSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
