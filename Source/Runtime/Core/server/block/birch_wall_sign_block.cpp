

#include "birch_wall_sign_block.h"

BirchWallSignBlock::BirchWallSignBlock() = default;
BirchWallSignBlock::~BirchWallSignBlock() = default;

short BirchWallSignBlock::getId() const {
  return 4048 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> BirchWallSignBlock::clone() const {
  std::shared_ptr<BirchWallSignBlock> copy = std::make_shared<BirchWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
