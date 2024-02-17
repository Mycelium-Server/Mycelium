

#include "stone_slab_block.h"

StoneSlabBlock::StoneSlabBlock() = default;
StoneSlabBlock::~StoneSlabBlock() = default;

short StoneSlabBlock::getId() const {
  return 9083 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> StoneSlabBlock::clone() const {
  std::shared_ptr<StoneSlabBlock> copy = std::make_shared<StoneSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
