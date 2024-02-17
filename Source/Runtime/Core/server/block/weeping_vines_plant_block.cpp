

#include "weeping_vines_plant_block.h"

WeepingVinesPlantBlock::WeepingVinesPlantBlock() = default;
WeepingVinesPlantBlock::~WeepingVinesPlantBlock() = default;

short WeepingVinesPlantBlock::getId() const {
  return 16225;
}

std::shared_ptr<Block> WeepingVinesPlantBlock::clone() const {
  std::shared_ptr<WeepingVinesPlantBlock> copy = std::make_shared<WeepingVinesPlantBlock>();
  return copy;
}
