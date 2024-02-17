

#include "dark_prismarine_slab_block.h"

DarkPrismarineSlabBlock::DarkPrismarineSlabBlock() = default;
DarkPrismarineSlabBlock::~DarkPrismarineSlabBlock() = default;

short DarkPrismarineSlabBlock::getId() const {
  return 8597 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DarkPrismarineSlabBlock::clone() const {
  std::shared_ptr<DarkPrismarineSlabBlock> copy = std::make_shared<DarkPrismarineSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
