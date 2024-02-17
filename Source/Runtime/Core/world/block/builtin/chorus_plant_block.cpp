

#include "chorus_plant_block.h"

ChorusPlantBlock::ChorusPlantBlock() = default;
ChorusPlantBlock::~ChorusPlantBlock() = default;

short ChorusPlantBlock::getId() const {
  return 9945 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + down * 32;
}

std::shared_ptr<Block> ChorusPlantBlock::clone() const {
  std::shared_ptr<ChorusPlantBlock> copy = std::make_shared<ChorusPlantBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
