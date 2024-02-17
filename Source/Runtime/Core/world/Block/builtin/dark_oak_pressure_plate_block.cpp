

#include "dark_oak_pressure_plate_block.h"

DarkOakPressurePlateBlock::DarkOakPressurePlateBlock() = default;
DarkOakPressurePlateBlock::~DarkOakPressurePlateBlock() = default;

short DarkOakPressurePlateBlock::getId() const {
  return 4188 + powered * 1;
}

std::shared_ptr<Block> DarkOakPressurePlateBlock::clone() const {
  std::shared_ptr<DarkOakPressurePlateBlock> copy = std::make_shared<DarkOakPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
