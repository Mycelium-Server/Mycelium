

#include "cut_sandstone_slab_block.h"

CutSandstoneSlabBlock::CutSandstoneSlabBlock() = default;
CutSandstoneSlabBlock::~CutSandstoneSlabBlock() = default;

short CutSandstoneSlabBlock::getId() const {
  return 9101 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CutSandstoneSlabBlock::clone() const {
  std::shared_ptr<CutSandstoneSlabBlock> copy = std::make_shared<CutSandstoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
