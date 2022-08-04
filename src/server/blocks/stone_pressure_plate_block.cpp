#include "stone_pressure_plate_block.h"

StonePressurePlateBlock::StonePressurePlateBlock() = default;
StonePressurePlateBlock::~StonePressurePlateBlock() = default;

short StonePressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4112;
  if (powered == POWERED_FALSE) return 4113;
  return 4113;
}
