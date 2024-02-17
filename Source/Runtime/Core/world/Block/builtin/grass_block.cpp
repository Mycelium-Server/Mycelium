

#include "grass_block.h"

GrassBlock::GrassBlock() = default;
GrassBlock::~GrassBlock() = default;

short GrassBlock::getId() const {
  return 1596;
}

std::shared_ptr<Block> GrassBlock::clone() const {
  std::shared_ptr<GrassBlock> copy = std::make_shared<GrassBlock>();
  return copy;
}
