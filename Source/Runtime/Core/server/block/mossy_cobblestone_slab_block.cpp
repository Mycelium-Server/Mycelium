

#include "mossy_cobblestone_slab_block.h"

MossyCobblestoneSlabBlock::MossyCobblestoneSlabBlock() = default;
MossyCobblestoneSlabBlock::~MossyCobblestoneSlabBlock() = default;

short MossyCobblestoneSlabBlock::getId() const {
  return 11694 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> MossyCobblestoneSlabBlock::clone() const {
  std::shared_ptr<MossyCobblestoneSlabBlock> copy = std::make_shared<MossyCobblestoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
