

#include "void_air_block.h"

VoidAirBlock::VoidAirBlock() = default;
VoidAirBlock::~VoidAirBlock() = default;

short VoidAirBlock::getId() const {
  return 10546;
}

std::shared_ptr<Block> VoidAirBlock::clone() const {
  std::shared_ptr<VoidAirBlock> copy = std::make_shared<VoidAirBlock>();
  return copy;
}
