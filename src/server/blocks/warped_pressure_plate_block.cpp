#include "warped_pressure_plate_block.h"

WarpedPressurePlateBlock::WarpedPressurePlateBlock() = default;
WarpedPressurePlateBlock::~WarpedPressurePlateBlock() = default;

short WarpedPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 16270;
  if (powered == POWERED_FALSE) return 16271;
  return 16271;
}
