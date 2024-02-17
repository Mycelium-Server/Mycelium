

#include "vine_block.h"

VineBlock::VineBlock() = default;
VineBlock::~VineBlock() = default;

short VineBlock::getId() const {
  return 5167 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> VineBlock::clone() const {
  std::shared_ptr<VineBlock> copy = std::make_shared<VineBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
