

#include "deepslate_tile_stairs_block.h"

DeepslateTileStairsBlock::DeepslateTileStairsBlock() = default;
DeepslateTileStairsBlock::~DeepslateTileStairsBlock() = default;

short DeepslateTileStairsBlock::getId() const {
  return 20604 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> DeepslateTileStairsBlock::clone() const {
  std::shared_ptr<DeepslateTileStairsBlock> copy = std::make_shared<DeepslateTileStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
