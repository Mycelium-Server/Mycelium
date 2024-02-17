

#include "deepslate_tile_slab_block.h"

DeepslateTileSlabBlock::DeepslateTileSlabBlock() = default;
DeepslateTileSlabBlock::~DeepslateTileSlabBlock() = default;

short DeepslateTileSlabBlock::getId() const {
  return 20684 + waterlogged * 1 + type * 2;
}

std::shared_ptr<Block> DeepslateTileSlabBlock::clone() const {
  std::shared_ptr<DeepslateTileSlabBlock> copy = std::make_shared<DeepslateTileSlabBlock>();
  copy->type = type;
  copy->waterlogged = waterlogged;
  return copy;
}
