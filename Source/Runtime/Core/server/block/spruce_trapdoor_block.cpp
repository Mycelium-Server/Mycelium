

#include "spruce_trapdoor_block.h"

SpruceTrapdoorBlock::SpruceTrapdoorBlock() = default;
SpruceTrapdoorBlock::~SpruceTrapdoorBlock() = default;

short SpruceTrapdoorBlock::getId() const {
  return 4484 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> SpruceTrapdoorBlock::clone() const {
  std::shared_ptr<SpruceTrapdoorBlock> copy = std::make_shared<SpruceTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
