

#include "cut_red_sandstone_slab_block.h"

CutRedSandstoneSlabBlock::CutRedSandstoneSlabBlock() = default;
CutRedSandstoneSlabBlock::~CutRedSandstoneSlabBlock() = default;

short CutRedSandstoneSlabBlock::getId() const {
  return 9155 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CutRedSandstoneSlabBlock::clone() const {
  std::shared_ptr<CutRedSandstoneSlabBlock> copy = std::make_shared<CutRedSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
