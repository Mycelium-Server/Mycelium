#include "jungle_pressure_plate_block.h"

JunglePressurePlateBlock::JunglePressurePlateBlock() = default;
JunglePressurePlateBlock::~JunglePressurePlateBlock() = default;

short JunglePressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4184;
  if (powered == POWERED_FALSE) return 4185;
  return 4185;
}
