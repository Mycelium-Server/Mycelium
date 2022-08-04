#include "crimson_pressure_plate_block.h"

CrimsonPressurePlateBlock::CrimsonPressurePlateBlock() = default;
CrimsonPressurePlateBlock::~CrimsonPressurePlateBlock() = default;

short CrimsonPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 16268;
  if (powered == POWERED_FALSE) return 16269;
  return 16269;
}
