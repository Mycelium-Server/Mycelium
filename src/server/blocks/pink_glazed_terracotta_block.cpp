#include "pink_glazed_terracotta_block.h"

PinkGlazedTerracottaBlock::PinkGlazedTerracottaBlock() = default;
PinkGlazedTerracottaBlock::~PinkGlazedTerracottaBlock() = default;

short PinkGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10279;
  if (facing == FACING_SOUTH) return 10280;
  if (facing == FACING_WEST) return 10281;
  if (facing == FACING_EAST) return 10282;
  return 10279;
}
