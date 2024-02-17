

#include "iron_trapdoor_block.h"

IronTrapdoorBlock::IronTrapdoorBlock() = default;
IronTrapdoorBlock::~IronTrapdoorBlock() = default;

short IronTrapdoorBlock::getId() const {
  return 8278 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> IronTrapdoorBlock::clone() const {
  std::shared_ptr<IronTrapdoorBlock> copy = std::make_shared<IronTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
