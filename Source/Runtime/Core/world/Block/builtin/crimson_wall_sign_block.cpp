

#include "crimson_wall_sign_block.h"

CrimsonWallSignBlock::CrimsonWallSignBlock() = default;
CrimsonWallSignBlock::~CrimsonWallSignBlock() = default;

short CrimsonWallSignBlock::getId() const {
  return 16928 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> CrimsonWallSignBlock::clone() const {
  std::shared_ptr<CrimsonWallSignBlock> copy = std::make_shared<CrimsonWallSignBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
