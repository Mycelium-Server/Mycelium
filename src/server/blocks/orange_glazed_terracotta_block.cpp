#include "orange_glazed_terracotta_block.h"

OrangeGlazedTerracottaBlock::OrangeGlazedTerracottaBlock() = default;
OrangeGlazedTerracottaBlock::~OrangeGlazedTerracottaBlock() = default;

short OrangeGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10259;
  if (facing == FACING_SOUTH) return 10260;
  if (facing == FACING_WEST) return 10261;
  if (facing == FACING_EAST) return 10262;
  return 10259;
}
