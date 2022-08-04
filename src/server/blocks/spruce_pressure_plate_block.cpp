#include "spruce_pressure_plate_block.h"

SprucePressurePlateBlock::SprucePressurePlateBlock() = default;
SprucePressurePlateBlock::~SprucePressurePlateBlock() = default;

short SprucePressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4180;
  if (powered == POWERED_FALSE) return 4181;
  return 4181;
}
