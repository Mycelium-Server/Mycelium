

#include "soul_soil_block.h"

SoulSoilBlock::SoulSoilBlock() = default;
SoulSoilBlock::~SoulSoilBlock() = default;

short SoulSoilBlock::getId() const {
  return 4310;
}

std::shared_ptr<Block> SoulSoilBlock::clone() const {
  std::shared_ptr<SoulSoilBlock> copy = std::make_shared<SoulSoilBlock>();
  return copy;
}
