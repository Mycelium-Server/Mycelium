

#include "activator_rail_block.h"

ActivatorRailBlock::ActivatorRailBlock() = default;
ActivatorRailBlock::~ActivatorRailBlock() = default;

short ActivatorRailBlock::getId() const {
  return 7440 + waterlogged * 1 + shape * 2 + powered * 12;
}

std::shared_ptr<Block> ActivatorRailBlock::clone() const {
  std::shared_ptr<ActivatorRailBlock> copy = std::make_shared<ActivatorRailBlock>();
  copy->powered = powered;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
