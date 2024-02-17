

#include "oak_trapdoor_block.h"

OakTrapdoorBlock::OakTrapdoorBlock() = default;
OakTrapdoorBlock::~OakTrapdoorBlock() = default;

short OakTrapdoorBlock::getId() const {
  return 4420 + waterlogged * 1 + powered * 2 + open * 4 + half * 8 + facing * 16;
}

std::shared_ptr<Block> OakTrapdoorBlock::clone() const {
  std::shared_ptr<OakTrapdoorBlock> copy = std::make_shared<OakTrapdoorBlock>();
  copy->facing = facing;
  copy->half = half;
  copy->open = open;
  copy->powered = powered;
  copy->waterlogged = waterlogged;
  return copy;
}
