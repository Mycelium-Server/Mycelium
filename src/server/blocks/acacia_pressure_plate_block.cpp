#include "acacia_pressure_plate_block.h"

AcaciaPressurePlateBlock::AcaciaPressurePlateBlock() = default;
AcaciaPressurePlateBlock::~AcaciaPressurePlateBlock() = default;

short AcaciaPressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 4186;
  if (powered == POWERED_FALSE) return 4187;
  return 4187;
}
