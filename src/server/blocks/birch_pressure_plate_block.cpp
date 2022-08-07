#include "birch_pressure_plate_block.h"

BirchPressurePlateBlock::BirchPressurePlateBlock() = default;
BirchPressurePlateBlock::~BirchPressurePlateBlock() = default;

short BirchPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4182;
  if (powered == POWERED_FALSE) return 4183;
  return 4183;
}
