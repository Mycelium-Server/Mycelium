

#include "light_weighted_pressure_plate_block.h"

LightWeightedPressurePlateBlock::LightWeightedPressurePlateBlock() = default;
LightWeightedPressurePlateBlock::~LightWeightedPressurePlateBlock() = default;

short LightWeightedPressurePlateBlock::getId() const {
  return 7263 + power * 1;
}

std::shared_ptr<Block> LightWeightedPressurePlateBlock::clone() const {
  std::shared_ptr<LightWeightedPressurePlateBlock> copy = std::make_shared<LightWeightedPressurePlateBlock>();
  copy->power = power;
  return copy;
}
