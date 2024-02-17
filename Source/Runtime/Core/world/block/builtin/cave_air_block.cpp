

#include "cave_air_block.h"

CaveAirBlock::CaveAirBlock() = default;
CaveAirBlock::~CaveAirBlock() = default;

short CaveAirBlock::getId() const {
  return 10547;
}

std::shared_ptr<Block> CaveAirBlock::clone() const {
  std::shared_ptr<CaveAirBlock> copy = std::make_shared<CaveAirBlock>();
  return copy;
}
