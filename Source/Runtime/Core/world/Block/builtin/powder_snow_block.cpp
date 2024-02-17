

#include "powder_snow_block.h"

PowderSnowBlock::PowderSnowBlock() = default;
PowderSnowBlock::~PowderSnowBlock() = default;

short PowderSnowBlock::getId() const {
  return 18672;
}

std::shared_ptr<Block> PowderSnowBlock::clone() const {
  std::shared_ptr<PowderSnowBlock> copy = std::make_shared<PowderSnowBlock>();
  return copy;
}
