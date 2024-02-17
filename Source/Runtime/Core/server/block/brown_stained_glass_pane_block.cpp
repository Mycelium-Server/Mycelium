

#include "brown_stained_glass_pane_block.h"

BrownStainedGlassPaneBlock::BrownStainedGlassPaneBlock() = default;
BrownStainedGlassPaneBlock::~BrownStainedGlassPaneBlock() = default;

short BrownStainedGlassPaneBlock::getId() const {
  return 7876 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> BrownStainedGlassPaneBlock::clone() const {
  std::shared_ptr<BrownStainedGlassPaneBlock> copy = std::make_shared<BrownStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
