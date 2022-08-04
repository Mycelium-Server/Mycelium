#include "dark_oak_sapling_block.h"

DarkOakSaplingBlock::DarkOakSaplingBlock() = default;
DarkOakSaplingBlock::~DarkOakSaplingBlock() = default;

short DarkOakSaplingBlock::getId() const {
  if (stage == STAGE_0) return 32;
  if (stage == STAGE_1) return 33;
  return 32;
}
