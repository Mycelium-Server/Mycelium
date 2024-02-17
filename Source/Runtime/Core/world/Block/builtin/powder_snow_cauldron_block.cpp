

#include "powder_snow_cauldron_block.h"

PowderSnowCauldronBlock::PowderSnowCauldronBlock() = default;
PowderSnowCauldronBlock::~PowderSnowCauldronBlock() = default;

short PowderSnowCauldronBlock::getId() const {
  return 5733 + level * 1;
}

std::shared_ptr<Block> PowderSnowCauldronBlock::clone() const {
  std::shared_ptr<PowderSnowCauldronBlock> copy = std::make_shared<PowderSnowCauldronBlock>();
  copy->level = level;
  return copy;
}
