#include "oak_sapling_block.h"

OakSaplingBlock::OakSaplingBlock() = default;
OakSaplingBlock::~OakSaplingBlock() = default;

short OakSaplingBlock::getId() const {
  if (stage == STAGE_0) return 22;
  if (stage == STAGE_1) return 23;
  return 22;
}
