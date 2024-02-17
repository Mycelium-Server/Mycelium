

#include "birch_sign_block.h"

BirchSignBlock::BirchSignBlock() = default;
BirchSignBlock::~BirchSignBlock() = default;

short BirchSignBlock::getId() const {
  return 3700 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> BirchSignBlock::clone() const {
  std::shared_ptr<BirchSignBlock> copy = std::make_shared<BirchSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
