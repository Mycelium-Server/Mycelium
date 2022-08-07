#include "purple_glazed_terracotta_block.h"

PurpleGlazedTerracottaBlock::PurpleGlazedTerracottaBlock() = default;
PurpleGlazedTerracottaBlock::~PurpleGlazedTerracottaBlock() = default;

short PurpleGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10295;
  if (facing == FACING_SOUTH) return 10296;
  if (facing == FACING_WEST) return 10297;
  if (facing == FACING_EAST) return 10298;
  return 10295;
}
