#include "mangrove_pressure_plate_block.h"

MangrovePressurePlateBlock::MangrovePressurePlateBlock() = default;
MangrovePressurePlateBlock::~MangrovePressurePlateBlock() = default;

short MangrovePressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4190;
  if (powered == POWERED_FALSE) return 4191;
  return 4191;
}
