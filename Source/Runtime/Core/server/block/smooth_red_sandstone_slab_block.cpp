

#include "smooth_red_sandstone_slab_block.h"

SmoothRedSandstoneSlabBlock::SmoothRedSandstoneSlabBlock() = default;
SmoothRedSandstoneSlabBlock::~SmoothRedSandstoneSlabBlock() = default;

short SmoothRedSandstoneSlabBlock::getId() const {
  return 11676 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SmoothRedSandstoneSlabBlock::clone() const {
  std::shared_ptr<SmoothRedSandstoneSlabBlock> copy = std::make_shared<SmoothRedSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
