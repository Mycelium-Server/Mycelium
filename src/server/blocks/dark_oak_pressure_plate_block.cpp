#include "dark_oak_pressure_plate_block.h"

DarkOakPressurePlateBlock::DarkOakPressurePlateBlock() = default;
DarkOakPressurePlateBlock::~DarkOakPressurePlateBlock() = default;

short DarkOakPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4188;
  if (powered == POWERED_FALSE) return 4189;
  return 4189;
}
