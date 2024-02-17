

#include "polished_blackstone_pressure_plate_block.h"

PolishedBlackstonePressurePlateBlock::PolishedBlackstonePressurePlateBlock() = default;
PolishedBlackstonePressurePlateBlock::~PolishedBlackstonePressurePlateBlock() = default;

short PolishedBlackstonePressurePlateBlock::getId() const {
  return 17960 + powered * 1;
}

std::shared_ptr<Block> PolishedBlackstonePressurePlateBlock::clone() const {
  std::shared_ptr<PolishedBlackstonePressurePlateBlock> copy = std::make_shared<PolishedBlackstonePressurePlateBlock>();
  copy->powered = powered;
  return copy;
}
