

#include "exposed_cut_copper_slab_block.h"

ExposedCutCopperSlabBlock::ExposedCutCopperSlabBlock() = default;
ExposedCutCopperSlabBlock::~ExposedCutCopperSlabBlock() = default;

short ExposedCutCopperSlabBlock::getId() const {
  return 19250 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> ExposedCutCopperSlabBlock::clone() const {
  std::shared_ptr<ExposedCutCopperSlabBlock> copy = std::make_shared<ExposedCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
