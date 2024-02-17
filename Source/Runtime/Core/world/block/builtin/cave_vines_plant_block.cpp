

#include "cave_vines_plant_block.h"

CaveVinesPlantBlock::CaveVinesPlantBlock() = default;
CaveVinesPlantBlock::~CaveVinesPlantBlock() = default;

short CaveVinesPlantBlock::getId() const {
  return 19711 + berries * 1;
}

std::shared_ptr<Block> CaveVinesPlantBlock::clone() const {
  std::shared_ptr<CaveVinesPlantBlock> copy = std::make_shared<CaveVinesPlantBlock>();
  copy->berries = berries;
  return copy;
}
