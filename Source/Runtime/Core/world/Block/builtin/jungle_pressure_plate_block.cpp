

#include "jungle_pressure_plate_block.h"

JunglePressurePlateBlock::JunglePressurePlateBlock() = default;
JunglePressurePlateBlock::~JunglePressurePlateBlock() = default;

short JunglePressurePlateBlock::getId() const {
  return 4184 + powered * 1;
}

std::shared_ptr<Block> JunglePressurePlateBlock::clone() const {
  std::shared_ptr<JunglePressurePlateBlock> copy = std::make_shared<JunglePressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
