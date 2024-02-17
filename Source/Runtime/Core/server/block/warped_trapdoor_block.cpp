

#include "warped_trapdoor_block.h"

WarpedTrapdoorBlock::WarpedTrapdoorBlock() = default;
WarpedTrapdoorBlock::~WarpedTrapdoorBlock() = default;

short WarpedTrapdoorBlock::getId() const {
  return 16400 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> WarpedTrapdoorBlock::clone() const {
  std::shared_ptr<WarpedTrapdoorBlock> copy = std::make_shared<WarpedTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
