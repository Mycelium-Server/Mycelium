

#include "rail_block.h"

RailBlock::RailBlock() = default;
RailBlock::~RailBlock() = default;

short RailBlock::getId() const {
  return 3932 + waterlogged * 1 + shape * 2;
}

std::shared_ptr<Block> RailBlock::clone() const {
  std::shared_ptr<RailBlock> copy = std::make_shared<RailBlock>();
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
