

#include "quartz_slab_block.h"

QuartzSlabBlock::QuartzSlabBlock() = default;
QuartzSlabBlock::~QuartzSlabBlock() = default;

short QuartzSlabBlock::getId() const {
  return 9143 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> QuartzSlabBlock::clone() const {
  std::shared_ptr<QuartzSlabBlock> copy = std::make_shared<QuartzSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
