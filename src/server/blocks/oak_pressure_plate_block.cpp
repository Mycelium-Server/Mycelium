#include "oak_pressure_plate_block.h"

OakPressurePlateBlock::OakPressurePlateBlock() = default;
OakPressurePlateBlock::~OakPressurePlateBlock() = default;

short OakPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4178;
  if (powered == POWERED_FALSE) return 4179;
  return 4179;
}
