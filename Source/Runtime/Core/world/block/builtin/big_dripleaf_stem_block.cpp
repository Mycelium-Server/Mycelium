

#include "big_dripleaf_stem_block.h"

BigDripleafStemBlock::BigDripleafStemBlock() = default;
BigDripleafStemBlock::~BigDripleafStemBlock() = default;

short BigDripleafStemBlock::getId() const {
  return 19750 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> BigDripleafStemBlock::clone() const {
  std::shared_ptr<BigDripleafStemBlock> copy = std::make_shared<BigDripleafStemBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
