

#include "weathered_cut_copper_slab_block.h"

WeatheredCutCopperSlabBlock::WeatheredCutCopperSlabBlock() = default;
WeatheredCutCopperSlabBlock::~WeatheredCutCopperSlabBlock() = default;

short WeatheredCutCopperSlabBlock::getId() const {
  return 19244 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> WeatheredCutCopperSlabBlock::clone() const {
  std::shared_ptr<WeatheredCutCopperSlabBlock> copy = std::make_shared<WeatheredCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
