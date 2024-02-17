

#include "black_stained_glass_pane_block.h"

BlackStainedGlassPaneBlock::BlackStainedGlassPaneBlock() = default;
BlackStainedGlassPaneBlock::~BlackStainedGlassPaneBlock() = default;

short BlackStainedGlassPaneBlock::getId() const {
  return 7972 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> BlackStainedGlassPaneBlock::clone() const {
  std::shared_ptr<BlackStainedGlassPaneBlock> copy = std::make_shared<BlackStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
