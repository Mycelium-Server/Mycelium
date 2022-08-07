#include "blue_glazed_terracotta_block.h"

BlueGlazedTerracottaBlock::BlueGlazedTerracottaBlock() = default;
BlueGlazedTerracottaBlock::~BlueGlazedTerracottaBlock() = default;

short BlueGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10299;
  if (facing == FACING_SOUTH) return 10300;
  if (facing == FACING_WEST) return 10301;
  if (facing == FACING_EAST) return 10302;
  return 10299;
}
