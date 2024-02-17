

#include "birch_trapdoor_block.h"

BirchTrapdoorBlock::BirchTrapdoorBlock() = default;
BirchTrapdoorBlock::~BirchTrapdoorBlock() = default;

short BirchTrapdoorBlock::getId() const {
  return 4548 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> BirchTrapdoorBlock::clone() const {
  std::shared_ptr<BirchTrapdoorBlock> copy = std::make_shared<BirchTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
