

#include "iron_bars_block.h"

IronBarsBlock::IronBarsBlock() = default;
IronBarsBlock::~IronBarsBlock() = default;

short IronBarsBlock::getId() const {
  return 5072 + west * 1 + waterlogged * 2 + south * 4 + north * 8 + east * 16;
}

std::shared_ptr<Block> IronBarsBlock::clone() const {
  std::shared_ptr<IronBarsBlock> copy = std::make_shared<IronBarsBlock>();
  copy->east = east;
  copy->north = north;
  copy->south = south;
  copy->waterlogged = waterlogged;
  copy->west = west;
  return copy;
}
