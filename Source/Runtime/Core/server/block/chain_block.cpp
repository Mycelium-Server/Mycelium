

#include "chain_block.h"

ChainBlock::ChainBlock() = default;
ChainBlock::~ChainBlock() = default;

short ChainBlock::getId() const {
  return 5104 + waterlogged * 1 + axis * 2;
}

std::shared_ptr<Block> ChainBlock::clone() const {
  std::shared_ptr<ChainBlock> copy = std::make_shared<ChainBlock>();
  copy->axis = axis;
  copy->waterlogged = waterlogged;
  return copy;
}
