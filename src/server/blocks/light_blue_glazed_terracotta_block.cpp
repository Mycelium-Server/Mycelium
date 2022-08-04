#include "light_blue_glazed_terracotta_block.h"

LightBlueGlazedTerracottaBlock::LightBlueGlazedTerracottaBlock() = default;
LightBlueGlazedTerracottaBlock::~LightBlueGlazedTerracottaBlock() = default;

short LightBlueGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10267;
  if (facing == FACING_SOUTH) return 10268;
  if (facing == FACING_WEST) return 10269;
  if (facing == FACING_EAST) return 10270;
  return 10267;
}
