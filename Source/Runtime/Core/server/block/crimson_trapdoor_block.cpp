

#include "crimson_trapdoor_block.h"

CrimsonTrapdoorBlock::CrimsonTrapdoorBlock() = default;
CrimsonTrapdoorBlock::~CrimsonTrapdoorBlock() = default;

short CrimsonTrapdoorBlock::getId() const {
  return 16336 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> CrimsonTrapdoorBlock::clone() const {
  std::shared_ptr<CrimsonTrapdoorBlock> copy = std::make_shared<CrimsonTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
