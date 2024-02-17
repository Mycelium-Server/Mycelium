

#include "orange_stained_glass_pane_block.h"

OrangeStainedGlassPaneBlock::OrangeStainedGlassPaneBlock() = default;
OrangeStainedGlassPaneBlock::~OrangeStainedGlassPaneBlock() = default;

short OrangeStainedGlassPaneBlock::getId() const {
  return 7524 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> OrangeStainedGlassPaneBlock::clone() const {
  std::shared_ptr<OrangeStainedGlassPaneBlock> copy = std::make_shared<OrangeStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
