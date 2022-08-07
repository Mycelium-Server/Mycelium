#include "cave_vines_plant_block.h"

CaveVinesPlantBlock::CaveVinesPlantBlock() = default;
CaveVinesPlantBlock::~CaveVinesPlantBlock() = default;

short CaveVinesPlantBlock::getId() const {
  if (berries == BERRIES_TRUE) return 19711;
  if (berries == BERRIES_FALSE) return 19712;
  return 19712;
}
