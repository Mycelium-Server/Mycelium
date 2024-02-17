

#include "green_stained_glass_pane_block.h"

GreenStainedGlassPaneBlock::GreenStainedGlassPaneBlock() = default;
GreenStainedGlassPaneBlock::~GreenStainedGlassPaneBlock() = default;

short GreenStainedGlassPaneBlock::getId() const {
  return 7908 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> GreenStainedGlassPaneBlock::clone() const {
  std::shared_ptr<GreenStainedGlassPaneBlock> copy = std::make_shared<GreenStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
