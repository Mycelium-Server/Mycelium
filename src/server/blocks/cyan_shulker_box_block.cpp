#include "cyan_shulker_box_block.h"

CyanShulkerBoxBlock::CyanShulkerBoxBlock() = default;
CyanShulkerBoxBlock::~CyanShulkerBoxBlock() = default;

short CyanShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10213;
  if (facing == FACING_EAST) return 10214;
  if (facing == FACING_SOUTH) return 10215;
  if (facing == FACING_WEST) return 10216;
  if (facing == FACING_UP) return 10217;
  if (facing == FACING_DOWN) return 10218;
  return 10217;
}
