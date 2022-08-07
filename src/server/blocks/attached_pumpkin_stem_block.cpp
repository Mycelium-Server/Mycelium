#include "attached_pumpkin_stem_block.h"

AttachedPumpkinStemBlock::AttachedPumpkinStemBlock() = default;
AttachedPumpkinStemBlock::~AttachedPumpkinStemBlock() = default;

short AttachedPumpkinStemBlock::getId() const {
  if (facing == FACING_NORTH) return 5143;
  if (facing == FACING_SOUTH) return 5144;
  if (facing == FACING_WEST) return 5145;
  if (facing == FACING_EAST) return 5146;
  return 5143;
}
