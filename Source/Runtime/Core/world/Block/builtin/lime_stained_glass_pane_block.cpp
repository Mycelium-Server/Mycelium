

#include "lime_stained_glass_pane_block.h"

LimeStainedGlassPaneBlock::LimeStainedGlassPaneBlock() = default;
LimeStainedGlassPaneBlock::~LimeStainedGlassPaneBlock() = default;

short LimeStainedGlassPaneBlock::getId() const {
  return 7652 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> LimeStainedGlassPaneBlock::clone() const {
  std::shared_ptr<LimeStainedGlassPaneBlock> copy = std::make_shared<LimeStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
