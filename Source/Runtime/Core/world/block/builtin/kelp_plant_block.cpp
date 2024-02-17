

#include "kelp_plant_block.h"

KelpPlantBlock::KelpPlantBlock() = default;
KelpPlantBlock::~KelpPlantBlock() = default;

short KelpPlantBlock::getId() const {
  return 10377;
}

std::shared_ptr<Block> KelpPlantBlock::clone() const {
  std::shared_ptr<KelpPlantBlock> copy = std::make_shared<KelpPlantBlock>();
  return copy;
}
