

#include "water_cauldron_block.h"

WaterCauldronBlock::WaterCauldronBlock() = default;
WaterCauldronBlock::~WaterCauldronBlock() = default;

short WaterCauldronBlock::getId() const {
  return 5729 + level * 1;
}

std::shared_ptr<Block> WaterCauldronBlock::clone() const {
  std::shared_ptr<WaterCauldronBlock> copy = std::make_shared<WaterCauldronBlock>();
  copy->level = level;
  return copy;
}
