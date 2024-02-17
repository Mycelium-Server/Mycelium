

#include "granite_block.h"

GraniteBlock::GraniteBlock() = default;
GraniteBlock::~GraniteBlock() = default;

short GraniteBlock::getId() const {
  return 2;
}

std::shared_ptr<Block> GraniteBlock::clone() const {
  std::shared_ptr<GraniteBlock> copy = std::make_shared<GraniteBlock>();
  return copy;
}
