

#include "mangrove_pressure_plate_block.h"

MangrovePressurePlateBlock::MangrovePressurePlateBlock() = default;
MangrovePressurePlateBlock::~MangrovePressurePlateBlock() = default;

short MangrovePressurePlateBlock::getId() const {
  return 4190 + powered * 1;
}

std::shared_ptr<Block> MangrovePressurePlateBlock::clone() const {
  std::shared_ptr<MangrovePressurePlateBlock> copy = std::make_shared<MangrovePressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
