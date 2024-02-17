

#include "cobblestone_slab_block.h"

CobblestoneSlabBlock::CobblestoneSlabBlock() = default;
CobblestoneSlabBlock::~CobblestoneSlabBlock() = default;

short CobblestoneSlabBlock::getId() const {
  return 9113 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> CobblestoneSlabBlock::clone() const {
  std::shared_ptr<CobblestoneSlabBlock> copy = std::make_shared<CobblestoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
