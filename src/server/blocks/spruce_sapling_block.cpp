#include "spruce_sapling_block.h"

SpruceSaplingBlock::SpruceSaplingBlock() = default;
SpruceSaplingBlock::~SpruceSaplingBlock() = default;

short SpruceSaplingBlock::getId() const {
  if (stage == STAGE_0) return 24;
  if (stage == STAGE_1) return 25;
  return 24;
}
