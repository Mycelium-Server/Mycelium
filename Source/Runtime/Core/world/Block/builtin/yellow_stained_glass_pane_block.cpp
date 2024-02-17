

#include "yellow_stained_glass_pane_block.h"

YellowStainedGlassPaneBlock::YellowStainedGlassPaneBlock() = default;
YellowStainedGlassPaneBlock::~YellowStainedGlassPaneBlock() = default;

short YellowStainedGlassPaneBlock::getId() const {
  return 7620 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> YellowStainedGlassPaneBlock::clone() const {
  std::shared_ptr<YellowStainedGlassPaneBlock> copy = std::make_shared<YellowStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
