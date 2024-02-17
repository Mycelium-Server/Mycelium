

#include "ladder_block.h"

LadderBlock::LadderBlock() = default;
LadderBlock::~LadderBlock() = default;

short LadderBlock::getId() const {
  return 3924 + waterlogged * 1 + facing * 2;
}

std::shared_ptr<Block> LadderBlock::clone() const {
  std::shared_ptr<LadderBlock> copy = std::make_shared<LadderBlock>();
  copy->facing = facing;
  copy->waterlogged = waterlogged;
  return copy;
}
