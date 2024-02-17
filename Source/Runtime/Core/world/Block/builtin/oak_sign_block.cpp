

#include "oak_sign_block.h"

OakSignBlock::OakSignBlock() = default;
OakSignBlock::~OakSignBlock() = default;

short OakSignBlock::getId() const {
  return 3636 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> OakSignBlock::clone() const {
  std::shared_ptr<OakSignBlock> copy = std::make_shared<OakSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
