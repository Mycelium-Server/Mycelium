#include "light_gray_glazed_terracotta_block.h"

LightGrayGlazedTerracottaBlock::LightGrayGlazedTerracottaBlock() = default;
LightGrayGlazedTerracottaBlock::~LightGrayGlazedTerracottaBlock() = default;

short LightGrayGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10287;
  if (facing == FACING_SOUTH) return 10288;
  if (facing == FACING_WEST) return 10289;
  if (facing == FACING_EAST) return 10290;
  return 10287;
}
