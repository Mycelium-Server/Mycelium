#include "birch_sapling_block.h"

BirchSaplingBlock::BirchSaplingBlock() = default;
BirchSaplingBlock::~BirchSaplingBlock() = default;

short BirchSaplingBlock::getId() const {
  if (stage == STAGE_0) return 26;
  if (stage == STAGE_1) return 27;
  return 26;
}
