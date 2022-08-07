#include "cyan_glazed_terracotta_block.h"

CyanGlazedTerracottaBlock::CyanGlazedTerracottaBlock() = default;
CyanGlazedTerracottaBlock::~CyanGlazedTerracottaBlock() = default;

short CyanGlazedTerracottaBlock::getId() const {
  if (facing == FACING_NORTH) return 10291;
  if (facing == FACING_SOUTH) return 10292;
  if (facing == FACING_WEST) return 10293;
  if (facing == FACING_EAST) return 10294;
  return 10291;
}
