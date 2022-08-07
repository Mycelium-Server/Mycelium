#include "attached_melon_stem_block.h"

AttachedMelonStemBlock::AttachedMelonStemBlock() = default;
AttachedMelonStemBlock::~AttachedMelonStemBlock() = default;

short AttachedMelonStemBlock::getId() const {
  if (facing == FACING_NORTH) return 5147;
  if (facing == FACING_SOUTH) return 5148;
  if (facing == FACING_WEST) return 5149;
  if (facing == FACING_EAST) return 5150;
  return 5147;
}
