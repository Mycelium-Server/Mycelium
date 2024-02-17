

#include "crimson_pressure_plate_block.h"

CrimsonPressurePlateBlock::CrimsonPressurePlateBlock() = default;
CrimsonPressurePlateBlock::~CrimsonPressurePlateBlock() = default;

short CrimsonPressurePlateBlock::getId() const {
  return 16268 + powered * 1;
}

std::shared_ptr<Block> CrimsonPressurePlateBlock::clone() const {
  std::shared_ptr<CrimsonPressurePlateBlock> copy = std::make_shared<CrimsonPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
