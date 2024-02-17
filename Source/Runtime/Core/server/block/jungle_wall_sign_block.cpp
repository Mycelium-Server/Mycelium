

#include "jungle_wall_sign_block.h"

JungleWallSignBlock::JungleWallSignBlock() = default;
JungleWallSignBlock::~JungleWallSignBlock() = default;

short JungleWallSignBlock::getId() const {
  return 4064 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> JungleWallSignBlock::clone() const {
  std::shared_ptr<JungleWallSignBlock> copy = std::make_shared<JungleWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
