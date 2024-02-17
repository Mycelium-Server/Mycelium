

#include "mud_brick_wall_block.h"

MudBrickWallBlock::MudBrickWallBlock() = default;
MudBrickWallBlock::~MudBrickWallBlock() = default;

short MudBrickWallBlock::getId() const {
  return 13692 + west * 1 + waterlogged * 3 + up * 6 + south * 12 + north * 36 + east * 108;
}

std::shared_ptr<Block> MudBrickWallBlock::clone() const {
  std::shared_ptr<MudBrickWallBlock> copy = std::make_shared<MudBrickWallBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
