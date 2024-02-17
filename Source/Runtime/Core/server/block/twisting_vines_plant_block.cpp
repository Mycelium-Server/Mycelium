

#include "twisting_vines_plant_block.h"

TwistingVinesPlantBlock::TwistingVinesPlantBlock() = default;
TwistingVinesPlantBlock::~TwistingVinesPlantBlock() = default;

short TwistingVinesPlantBlock::getId() const {
  return 16252;
}

std::shared_ptr<Block> TwistingVinesPlantBlock::clone() const {
  std::shared_ptr<TwistingVinesPlantBlock> copy = std::make_shared<TwistingVinesPlantBlock>();
  return copy;
}
