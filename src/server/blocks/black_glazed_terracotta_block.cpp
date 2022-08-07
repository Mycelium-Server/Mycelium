#include "black_glazed_terracotta_block.h"

BlackGlazedTerracottaBlock::BlackGlazedTerracottaBlock() = default;
BlackGlazedTerracottaBlock::~BlackGlazedTerracottaBlock() = default;

short BlackGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10315;
  if (facing == FACING_SOUTH) return 10316;
  if (facing == FACING_WEST) return 10317;
  if (facing == FACING_EAST) return 10318;
  return 10315;
}
