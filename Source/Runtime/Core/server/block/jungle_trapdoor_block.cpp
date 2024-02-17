

#include "jungle_trapdoor_block.h"

JungleTrapdoorBlock::JungleTrapdoorBlock() = default;
JungleTrapdoorBlock::~JungleTrapdoorBlock() = default;

short JungleTrapdoorBlock::getId() const {
  return 4612 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> JungleTrapdoorBlock::clone() const {
  std::shared_ptr<JungleTrapdoorBlock> copy = std::make_shared<JungleTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
