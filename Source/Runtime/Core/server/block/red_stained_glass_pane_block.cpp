

#include "red_stained_glass_pane_block.h"

RedStainedGlassPaneBlock::RedStainedGlassPaneBlock() = default;
RedStainedGlassPaneBlock::~RedStainedGlassPaneBlock() = default;

short RedStainedGlassPaneBlock::getId() const {
  return 7940 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> RedStainedGlassPaneBlock::clone() const {
  std::shared_ptr<RedStainedGlassPaneBlock> copy = std::make_shared<RedStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
