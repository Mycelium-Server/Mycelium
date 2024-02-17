

#include "oxidized_cut_copper_slab_block.h"

OxidizedCutCopperSlabBlock::OxidizedCutCopperSlabBlock() = default;
OxidizedCutCopperSlabBlock::~OxidizedCutCopperSlabBlock() = default;

short OxidizedCutCopperSlabBlock::getId() const {
  return 19238 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> OxidizedCutCopperSlabBlock::clone() const {
  std::shared_ptr<OxidizedCutCopperSlabBlock> copy = std::make_shared<OxidizedCutCopperSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
