

#include "acacia_pressure_plate_block.h"

AcaciaPressurePlateBlock::AcaciaPressurePlateBlock() = default;
AcaciaPressurePlateBlock::~AcaciaPressurePlateBlock() = default;

short AcaciaPressurePlateBlock::getId() const {
  return 4186 + powered * 1;
}

std::shared_ptr<Block> AcaciaPressurePlateBlock::clone() const {
  std::shared_ptr<AcaciaPressurePlateBlock> copy = std::make_shared<AcaciaPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
