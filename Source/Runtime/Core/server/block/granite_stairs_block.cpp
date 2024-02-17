

#include "granite_stairs_block.h"

GraniteStairsBlock::GraniteStairsBlock() = default;
GraniteStairsBlock::~GraniteStairsBlock() = default;

short GraniteStairsBlock::getId() const {
  return 11270 + waterlogged * 1 + shape * 2 + half * 10 + facing * 20;
}

std::shared_ptr<Block> GraniteStairsBlock::clone() const {
  std::shared_ptr<GraniteStairsBlock> copy = std::make_shared<GraniteStairsBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
