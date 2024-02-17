

#include "heavy_weighted_pressure_plate_block.h"

HeavyWeightedPressurePlateBlock::HeavyWeightedPressurePlateBlock() = default;
HeavyWeightedPressurePlateBlock::~HeavyWeightedPressurePlateBlock() = default;

short HeavyWeightedPressurePlateBlock::getId() const {
  return 7279 + power * 1;
}

std::shared_ptr<Block> HeavyWeightedPressurePlateBlock::clone() const {
  std::shared_ptr<HeavyWeightedPressurePlateBlock> copy = std::make_shared<HeavyWeightedPressurePlateBlock>();
  copy->power = power;
  return copy;
}
