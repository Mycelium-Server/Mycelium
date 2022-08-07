#include "green_glazed_terracotta_block.h"

GreenGlazedTerracottaBlock::GreenGlazedTerracottaBlock() = default;
GreenGlazedTerracottaBlock::~GreenGlazedTerracottaBlock() = default;

short GreenGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10307;
  if (facing == FACING_SOUTH) return 10308;
  if (facing == FACING_WEST) return 10309;
  if (facing == FACING_EAST) return 10310;
  return 10307;
}
