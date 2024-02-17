

#include "sea_pickle_block.h"

SeaPickleBlock::SeaPickleBlock() = default;
SeaPickleBlock::~SeaPickleBlock() = default;

short SeaPickleBlock::getId() const {
  return 10521 + waterlogged * 1 + pickles * 2;
}

std::shared_ptr<Block> SeaPickleBlock::clone() const {
  std::shared_ptr<SeaPickleBlock> copy = std::make_shared<SeaPickleBlock>();
  copy->pickles = pickles;
  copy->waterlogged = waterlogged;
  return copy;
}
