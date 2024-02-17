

#include "fire_block.h"

FireBlock::FireBlock() = default;
FireBlock::~FireBlock() = default;

short FireBlock::getId() const {
  return 1694 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + age * 32;
}

std::shared_ptr<Block> FireBlock::clone() const {
  std::shared_ptr<FireBlock> copy = std::make_shared<FireBlock>();
  copy->age = age;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
