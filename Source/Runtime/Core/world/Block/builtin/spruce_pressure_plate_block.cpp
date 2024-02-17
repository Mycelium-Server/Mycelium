

#include "spruce_pressure_plate_block.h"

SprucePressurePlateBlock::SprucePressurePlateBlock() = default;
SprucePressurePlateBlock::~SprucePressurePlateBlock() = default;

short SprucePressurePlateBlock::getId() const {
  return 4180 + powered * 1;
}

std::shared_ptr<Block> SprucePressurePlateBlock::clone() const {
  std::shared_ptr<SprucePressurePlateBlock> copy = std::make_shared<SprucePressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
