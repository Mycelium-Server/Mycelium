

#include "light_blue_stained_glass_pane_block.h"

LightBlueStainedGlassPaneBlock::LightBlueStainedGlassPaneBlock() = default;
LightBlueStainedGlassPaneBlock::~LightBlueStainedGlassPaneBlock() = default;

short LightBlueStainedGlassPaneBlock::getId() const {
  return 7588 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> LightBlueStainedGlassPaneBlock::clone() const {
  std::shared_ptr<LightBlueStainedGlassPaneBlock> copy = std::make_shared<LightBlueStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
