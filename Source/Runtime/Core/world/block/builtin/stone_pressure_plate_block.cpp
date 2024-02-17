

#include "stone_pressure_plate_block.h"

StonePressurePlateBlock::StonePressurePlateBlock() = default;
StonePressurePlateBlock::~StonePressurePlateBlock() = default;

short StonePressurePlateBlock::getId() const {
  return 4112 + powered * 1;
}

std::shared_ptr<Block> StonePressurePlateBlock::clone() const {
  std::shared_ptr<StonePressurePlateBlock> copy = std::make_shared<StonePressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
