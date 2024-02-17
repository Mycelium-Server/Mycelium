

#include "crimson_slab_block.h"

CrimsonSlabBlock::CrimsonSlabBlock() = default;
CrimsonSlabBlock::~CrimsonSlabBlock() = default;

short CrimsonSlabBlock::getId() const {
  return 16256 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CrimsonSlabBlock::clone() const {
  std::shared_ptr<CrimsonSlabBlock> copy = std::make_shared<CrimsonSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
