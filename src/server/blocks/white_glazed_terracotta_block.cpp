#include "white_glazed_terracotta_block.h"

WhiteGlazedTerracottaBlock::WhiteGlazedTerracottaBlock() = default;
WhiteGlazedTerracottaBlock::~WhiteGlazedTerracottaBlock() = default;

short WhiteGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10255;
  if (facing == FACING_SOUTH) return 10256;
  if (facing == FACING_WEST) return 10257;
  if (facing == FACING_EAST) return 10258;
  return 10255;
}
