

#include "warped_pressure_plate_block.h"

WarpedPressurePlateBlock::WarpedPressurePlateBlock() = default;
WarpedPressurePlateBlock::~WarpedPressurePlateBlock() = default;

short WarpedPressurePlateBlock::getId() const {
  return 16270 + powered * 1;
}

std::shared_ptr<Block> WarpedPressurePlateBlock::clone() const {
  std::shared_ptr<WarpedPressurePlateBlock> copy = std::make_shared<WarpedPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
