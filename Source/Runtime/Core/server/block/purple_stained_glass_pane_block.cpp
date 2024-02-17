

#include "purple_stained_glass_pane_block.h"

PurpleStainedGlassPaneBlock::PurpleStainedGlassPaneBlock() = default;
PurpleStainedGlassPaneBlock::~PurpleStainedGlassPaneBlock() = default;

short PurpleStainedGlassPaneBlock::getId() const {
  return 7812 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> PurpleStainedGlassPaneBlock::clone() const {
  std::shared_ptr<PurpleStainedGlassPaneBlock> copy = std::make_shared<PurpleStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
