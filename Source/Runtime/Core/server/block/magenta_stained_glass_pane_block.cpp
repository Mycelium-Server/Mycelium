

#include "magenta_stained_glass_pane_block.h"

MagentaStainedGlassPaneBlock::MagentaStainedGlassPaneBlock() = default;
MagentaStainedGlassPaneBlock::~MagentaStainedGlassPaneBlock() = default;

short MagentaStainedGlassPaneBlock::getId() const {
  return 7556 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> MagentaStainedGlassPaneBlock::clone() const {
  std::shared_ptr<MagentaStainedGlassPaneBlock> copy = std::make_shared<MagentaStainedGlassPaneBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
