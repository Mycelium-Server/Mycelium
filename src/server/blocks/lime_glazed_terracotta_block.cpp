#include "lime_glazed_terracotta_block.h"

LimeGlazedTerracottaBlock::LimeGlazedTerracottaBlock() = default;
LimeGlazedTerracottaBlock::~LimeGlazedTerracottaBlock() = default;

short LimeGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10275;
  if (facing == FACING_SOUTH) return 10276;
  if (facing == FACING_WEST) return 10277;
  if (facing == FACING_EAST) return 10278;
  return 10275;
}
