

#include "dark_oak_wall_sign_block.h"

DarkOakWallSignBlock::DarkOakWallSignBlock() = default;
DarkOakWallSignBlock::~DarkOakWallSignBlock() = default;

short DarkOakWallSignBlock::getId() const {
  return 4072 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> DarkOakWallSignBlock::clone() const {
  std::shared_ptr<DarkOakWallSignBlock> copy = std::make_shared<DarkOakWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
