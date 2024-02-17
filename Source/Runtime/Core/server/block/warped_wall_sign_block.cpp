

#include "warped_wall_sign_block.h"

WarpedWallSignBlock::WarpedWallSignBlock() = default;
WarpedWallSignBlock::~WarpedWallSignBlock() = default;

short WarpedWallSignBlock::getId() const {
  return 16936 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> WarpedWallSignBlock::clone() const {
  std::shared_ptr<WarpedWallSignBlock> copy = std::make_shared<WarpedWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
