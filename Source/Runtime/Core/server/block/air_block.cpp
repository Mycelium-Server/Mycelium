

#include "air_block.h"

AirBlock::AirBlock() = default;
AirBlock::~AirBlock() = default;

short AirBlock::getId() const {
  return 0;
}

std::shared_ptr<Block> AirBlock::clone() const {
  std::shared_ptr<AirBlock> copy = std::make_shared<AirBlock>();
  return copy;
}
