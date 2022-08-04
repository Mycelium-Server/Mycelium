#include "brown_glazed_terracotta_block.h"

BrownGlazedTerracottaBlock::BrownGlazedTerracottaBlock() = default;
BrownGlazedTerracottaBlock::~BrownGlazedTerracottaBlock() = default;

short BrownGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10303;
  if (facing == FACING_SOUTH) return 10304;
  if (facing == FACING_WEST) return 10305;
  if (facing == FACING_EAST) return 10306;
  return 10303;
}
