

#include "mangrove_trapdoor_block.h"

MangroveTrapdoorBlock::MangroveTrapdoorBlock() = default;
MangroveTrapdoorBlock::~MangroveTrapdoorBlock() = default;

short MangroveTrapdoorBlock::getId() const {
  return 4804 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> MangroveTrapdoorBlock::clone() const {
  std::shared_ptr<MangroveTrapdoorBlock> copy = std::make_shared<MangroveTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
