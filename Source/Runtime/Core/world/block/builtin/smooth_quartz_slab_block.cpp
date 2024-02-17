

#include "smooth_quartz_slab_block.h"

SmoothQuartzSlabBlock::SmoothQuartzSlabBlock() = default;
SmoothQuartzSlabBlock::~SmoothQuartzSlabBlock() = default;

short SmoothQuartzSlabBlock::getId() const {
  return 11712 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> SmoothQuartzSlabBlock::clone() const {
  std::shared_ptr<SmoothQuartzSlabBlock> copy = std::make_shared<SmoothQuartzSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
