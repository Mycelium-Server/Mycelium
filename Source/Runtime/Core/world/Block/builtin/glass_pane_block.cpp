

#include "glass_pane_block.h"

GlassPaneBlock::GlassPaneBlock() = default;
GlassPaneBlock::~GlassPaneBlock() = default;

short GlassPaneBlock::getId() const {
  return 5110 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> GlassPaneBlock::clone() const {
  std::shared_ptr<GlassPaneBlock> copy = std::make_shared<GlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
