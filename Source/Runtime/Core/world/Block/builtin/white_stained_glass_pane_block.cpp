

#include "white_stained_glass_pane_block.h"

WhiteStainedGlassPaneBlock::WhiteStainedGlassPaneBlock() = default;
WhiteStainedGlassPaneBlock::~WhiteStainedGlassPaneBlock() = default;

short WhiteStainedGlassPaneBlock::getId() const {
  return 7492 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> WhiteStainedGlassPaneBlock::clone() const {
  std::shared_ptr<WhiteStainedGlassPaneBlock> copy = std::make_shared<WhiteStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
