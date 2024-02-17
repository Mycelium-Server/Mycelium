

#include "spruce_wall_sign_block.h"

SpruceWallSignBlock::SpruceWallSignBlock() = default;
SpruceWallSignBlock::~SpruceWallSignBlock() = default;

short SpruceWallSignBlock::getId() const {
  return 4040 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> SpruceWallSignBlock::clone() const {
  std::shared_ptr<SpruceWallSignBlock> copy = std::make_shared<SpruceWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
