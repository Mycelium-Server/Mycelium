

#include "prismarine_slab_block.h"

PrismarineSlabBlock::PrismarineSlabBlock() = default;
PrismarineSlabBlock::~PrismarineSlabBlock() = default;

short PrismarineSlabBlock::getId() const {
  return 8585 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> PrismarineSlabBlock::clone() const {
  std::shared_ptr<PrismarineSlabBlock> copy = std::make_shared<PrismarineSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
