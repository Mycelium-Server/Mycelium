

#include "dark_oak_sign_block.h"

DarkOakSignBlock::DarkOakSignBlock() = default;
DarkOakSignBlock::~DarkOakSignBlock() = default;

short DarkOakSignBlock::getId() const {
  return 3796 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> DarkOakSignBlock::clone() const {
  std::shared_ptr<DarkOakSignBlock> copy = std::make_shared<DarkOakSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
