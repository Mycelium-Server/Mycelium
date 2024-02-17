

#include "big_dripleaf_block.h"

BigDripleafBlock::BigDripleafBlock() = default;
BigDripleafBlock::~BigDripleafBlock() = default;

short BigDripleafBlock::getId() const {
  return 19718 + waterlogged * 1 + tilt * 2 + facing * 8;
}

std::shared_ptr<Block> BigDripleafBlock::clone() const {
  std::shared_ptr<BigDripleafBlock> copy = std::make_shared<BigDripleafBlock>();
  copy->facing = facing;
  copy->tilt = tilt;
  copy->waterlogged = waterlogged;
  return copy;
}
