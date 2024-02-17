

#include "mushroom_stem_block.h"

MushroomStemBlock::MushroomStemBlock() = default;
MushroomStemBlock::~MushroomStemBlock() = default;

short MushroomStemBlock::getId() const {
  return 5008 + west * 1 + up * 2 + south * 4 + north * 8 + east * 16 + down * 32;
}

std::shared_ptr<Block> MushroomStemBlock::clone() const {
  std::shared_ptr<MushroomStemBlock> copy = std::make_shared<MushroomStemBlock>();
  copy->down = down;
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->up = up;
  copy->west = west;
  return copy;
}
