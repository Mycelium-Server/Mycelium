

#include "powered_rail_block.h"

PoweredRailBlock::PoweredRailBlock() = default;
PoweredRailBlock::~PoweredRailBlock() = default;

short PoweredRailBlock::getId() const {
  return 1535 + waterlogged * 1 + shape * 2 + powered * 12;
}

std::shared_ptr<Block> PoweredRailBlock::clone() const {
  std::shared_ptr<PoweredRailBlock> copy = std::make_shared<PoweredRailBlock>();
  copy->powered = powered;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
