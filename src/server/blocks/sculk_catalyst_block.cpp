#include "sculk_catalyst_block.h"

SculkCatalystBlock::SculkCatalystBlock() = default;
SculkCatalystBlock::~SculkCatalystBlock() = default;

short SculkCatalystBlock::getId() const {
  if (bloom == BLOOM_TRUE) return 18898;
  if (bloom == BLOOM_FALSE) return 18899;
  return 18899;
}
