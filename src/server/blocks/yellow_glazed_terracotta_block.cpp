#include "yellow_glazed_terracotta_block.h"

YellowGlazedTerracottaBlock::YellowGlazedTerracottaBlock() = default;
YellowGlazedTerracottaBlock::~YellowGlazedTerracottaBlock() = default;

short YellowGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10271;
  if (facing == FACING_SOUTH) return 10272;
  if (facing == FACING_WEST) return 10273;
  if (facing == FACING_EAST) return 10274;
  return 10271;
}
