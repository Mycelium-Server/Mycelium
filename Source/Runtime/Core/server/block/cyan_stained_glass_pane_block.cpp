

#include "cyan_stained_glass_pane_block.h"

CyanStainedGlassPaneBlock::CyanStainedGlassPaneBlock() = default;
CyanStainedGlassPaneBlock::~CyanStainedGlassPaneBlock() = default;

short CyanStainedGlassPaneBlock::getId() const {
  return 7780 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> CyanStainedGlassPaneBlock::clone() const {
  std::shared_ptr<CyanStainedGlassPaneBlock> copy = std::make_shared<CyanStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
