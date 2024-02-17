

#include "detector_rail_block.h"

DetectorRailBlock::DetectorRailBlock() = default;
DetectorRailBlock::~DetectorRailBlock() = default;

short DetectorRailBlock::getId() const {
  return 1559 + waterlogged * 1 + shape * 2 + powered * 12;
}

std::shared_ptr<Block> DetectorRailBlock::clone() const {
  std::shared_ptr<DetectorRailBlock> copy = std::make_shared<DetectorRailBlock>();
  copy->powered = powered;
  copy->shape = shape;
  copy->waterlogged = waterlogged;
  return copy;
}
