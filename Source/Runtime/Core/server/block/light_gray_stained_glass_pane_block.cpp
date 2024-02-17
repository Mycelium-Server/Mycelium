

#include "light_gray_stained_glass_pane_block.h"

LightGrayStainedGlassPaneBlock::LightGrayStainedGlassPaneBlock() = default;
LightGrayStainedGlassPaneBlock::~LightGrayStainedGlassPaneBlock() = default;

short LightGrayStainedGlassPaneBlock::getId() const {
  return 7748 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> LightGrayStainedGlassPaneBlock::clone() const {
  std::shared_ptr<LightGrayStainedGlassPaneBlock> copy = std::make_shared<LightGrayStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
