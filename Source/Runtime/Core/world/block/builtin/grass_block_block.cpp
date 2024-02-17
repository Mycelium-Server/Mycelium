

#include "grass_block_block.h"

GrassBlockBlock::GrassBlockBlock() = default;
GrassBlockBlock::~GrassBlockBlock() = default;

short GrassBlockBlock::getId() const {
  return 8 + snowy * 1;
}

std::shared_ptr<Block> GrassBlockBlock::clone() const {
  std::shared_ptr<GrassBlockBlock> copy = std::make_shared<GrassBlockBlock>();
  copy->snowy = snowy;
  return copy;
}
