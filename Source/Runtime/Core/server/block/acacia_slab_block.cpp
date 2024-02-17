

#include "acacia_slab_block.h"

AcaciaSlabBlock::AcaciaSlabBlock() = default;
AcaciaSlabBlock::~AcaciaSlabBlock() = default;

short AcaciaSlabBlock::getId() const {
  return 9065 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> AcaciaSlabBlock::clone() const {
  std::shared_ptr<AcaciaSlabBlock> copy = std::make_shared<AcaciaSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
