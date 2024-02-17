

#include "warped_sign_block.h"

WarpedSignBlock::WarpedSignBlock() = default;
WarpedSignBlock::~WarpedSignBlock() = default;

short WarpedSignBlock::getId() const {
  return 16896 + waterlogged * 1 + rotation * 2;
}

std::shared_ptr<Block> WarpedSignBlock::clone() const {
  std::shared_ptr<WarpedSignBlock> copy = std::make_shared<WarpedSignBlock>();
  copy->rotation = rotation;
  copy->waterlogged = waterlogged;
  return copy;
}
