#include "red_glazed_terracotta_block.h"

RedGlazedTerracottaBlock::RedGlazedTerracottaBlock() = default;
RedGlazedTerracottaBlock::~RedGlazedTerracottaBlock() = default;

short RedGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10311;
  if (facing == FACING_SOUTH) return 10312;
  if (facing == FACING_WEST) return 10313;
  if (facing == FACING_EAST) return 10314;
  return 10311;
}
