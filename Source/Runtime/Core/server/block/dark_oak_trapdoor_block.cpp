

#include "dark_oak_trapdoor_block.h"

DarkOakTrapdoorBlock::DarkOakTrapdoorBlock() = default;
DarkOakTrapdoorBlock::~DarkOakTrapdoorBlock() = default;

short DarkOakTrapdoorBlock::getId() const {
  return 4740 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> DarkOakTrapdoorBlock::clone() const {
  std::shared_ptr<DarkOakTrapdoorBlock> copy = std::make_shared<DarkOakTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
