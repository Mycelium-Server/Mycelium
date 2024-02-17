

#include "oak_pressure_plate_block.h"

OakPressurePlateBlock::OakPressurePlateBlock() = default;
OakPressurePlateBlock::~OakPressurePlateBlock() = default;

short OakPressurePlateBlock::getId() const {
  return 4178 + powered * 1;
}

std::shared_ptr<Block> OakPressurePlateBlock::clone() const {
  std::shared_ptr<OakPressurePlateBlock> copy = std::make_shared<OakPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
