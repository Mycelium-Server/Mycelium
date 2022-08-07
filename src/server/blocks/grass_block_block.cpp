#include "grass_block_block.h"

GrassBlockBlock::GrassBlockBlock() = default;
GrassBlockBlock::~GrassBlockBlock() = default;

short GrassBlockBlock::getId() const {
  if (snowy == SNOWY_TRUE) return 8;
  if (snowy == SNOWY_FALSE) return 9;
  return 9;
}
