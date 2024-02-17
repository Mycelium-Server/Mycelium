

#include "jungle_slab_block.h"

JungleSlabBlock::JungleSlabBlock() = default;
JungleSlabBlock::~JungleSlabBlock() = default;

short JungleSlabBlock::getId() const {
  return 9059 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> JungleSlabBlock::clone() const {
  std::shared_ptr<JungleSlabBlock> copy = std::make_shared<JungleSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
