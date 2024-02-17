

#include "birch_pressure_plate_block.h"

BirchPressurePlateBlock::BirchPressurePlateBlock() = default;
BirchPressurePlateBlock::~BirchPressurePlateBlock() = default;

short BirchPressurePlateBlock::getId() const {
  return 4182 + powered * 1;
}

std::shared_ptr<Block> BirchPressurePlateBlock::clone() const {
  std::shared_ptr<BirchPressurePlateBlock> copy = std::make_shared<BirchPressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
