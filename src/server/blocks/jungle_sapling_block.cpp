#include "jungle_sapling_block.h"

JungleSaplingBlock::JungleSaplingBlock() = default;
JungleSaplingBlock::~JungleSaplingBlock() = default;

short JungleSaplingBlock::getId() const {
  if (stage == STAGE_0) return 28;
  if (stage == STAGE_1) return 29;
  return 28;
}
