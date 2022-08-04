#include "polished_blackstone_pressure_plate_block.h"

PolishedBlackstonePressurePlateBlock::PolishedBlackstonePressurePlateBlock() = default;
PolishedBlackstonePressurePlateBlock::~PolishedBlackstonePressurePlateBlock() = default;

short PolishedBlackstonePressurePlateBlock::getId() const {
  if (powered == POWERED_TRUE) return 17960;
  if (powered == POWERED_FALSE) return 17961;
  return 17961;
}
