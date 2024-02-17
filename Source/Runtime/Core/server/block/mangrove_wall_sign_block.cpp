

#include "mangrove_wall_sign_block.h"

MangroveWallSignBlock::MangroveWallSignBlock() = default;
MangroveWallSignBlock::~MangroveWallSignBlock() = default;

short MangroveWallSignBlock::getId() const {
  return 4080 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> MangroveWallSignBlock::clone() const {
  std::shared_ptr<MangroveWallSignBlock> copy = std::make_shared<MangroveWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
