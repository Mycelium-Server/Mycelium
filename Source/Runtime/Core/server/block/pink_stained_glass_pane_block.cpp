

#include "pink_stained_glass_pane_block.h"

PinkStainedGlassPaneBlock::PinkStainedGlassPaneBlock() = default;
PinkStainedGlassPaneBlock::~PinkStainedGlassPaneBlock() = default;

short PinkStainedGlassPaneBlock::getId() const {
  return 7684 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> PinkStainedGlassPaneBlock::clone() const {
  std::shared_ptr<PinkStainedGlassPaneBlock> copy = std::make_shared<PinkStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
