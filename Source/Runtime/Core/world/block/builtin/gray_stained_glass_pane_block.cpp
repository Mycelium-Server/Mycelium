

#include "gray_stained_glass_pane_block.h"

GrayStainedGlassPaneBlock::GrayStainedGlassPaneBlock() = default;
GrayStainedGlassPaneBlock::~GrayStainedGlassPaneBlock() = default;

short GrayStainedGlassPaneBlock::getId() const {
  return 7716 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> GrayStainedGlassPaneBlock::clone() const {
  std::shared_ptr<GrayStainedGlassPaneBlock> copy = std::make_shared<GrayStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
