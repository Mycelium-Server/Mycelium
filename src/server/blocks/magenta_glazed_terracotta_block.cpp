#include "magenta_glazed_terracotta_block.h"

MagentaGlazedTerracottaBlock::MagentaGlazedTerracottaBlock() = default;
MagentaGlazedTerracottaBlock::~MagentaGlazedTerracottaBlock() = default;

short MagentaGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10263;
  if (facing == FACING_SOUTH) return 10264;
  if (facing == FACING_WEST) return 10265;
  if (facing == FACING_EAST) return 10266;
  return 10263;
}
