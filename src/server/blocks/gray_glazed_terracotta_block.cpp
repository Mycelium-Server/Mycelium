#include "gray_glazed_terracotta_block.h"

GrayGlazedTerracottaBlock::GrayGlazedTerracottaBlock() = default;
GrayGlazedTerracottaBlock::~GrayGlazedTerracottaBlock() = default;

short GrayGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10283;
  if (facing == FACING_SOUTH) return 10284;
  if (facing == FACING_WEST) return 10285;
  if (facing == FACING_EAST) return 10286;
  return 10283;
}
