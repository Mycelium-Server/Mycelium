

#include "blue_stained_glass_pane_block.h"

BlueStainedGlassPaneBlock::BlueStainedGlassPaneBlock() = default;
BlueStainedGlassPaneBlock::~BlueStainedGlassPaneBlock() = default;

short BlueStainedGlassPaneBlock::getId() const {
  return 7844 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> BlueStainedGlassPaneBlock::clone() const {
  std::shared_ptr<BlueStainedGlassPaneBlock> copy = std::make_shared<BlueStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
