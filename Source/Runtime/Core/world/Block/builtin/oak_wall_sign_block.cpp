

#include "oak_wall_sign_block.h"

OakWallSignBlock::OakWallSignBlock() = default;
OakWallSignBlock::~OakWallSignBlock() = default;

short OakWallSignBlock::getId() const {
  return 4032 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> OakWallSignBlock::clone() const {
  std::shared_ptr<OakWallSignBlock> copy = std::make_shared<OakWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
