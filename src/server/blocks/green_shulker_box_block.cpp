#include "green_shulker_box_block.h"

GreenShulkerBoxBlock::GreenShulkerBoxBlock() = default;
GreenShulkerBoxBlock::~GreenShulkerBoxBlock() = default;

short GreenShulkerBoxBlock::getId() const {
  if (facing == FACING_NORTH) return 10237;
  if (facing == FACING_EAST) return 10238;
  if (facing == FACING_SOUTH) return 10239;
  if (facing == FACING_WEST) return 10240;
  if (facing == FACING_UP) return 10241;
  if (facing == FACING_DOWN) return 10242;
  return 10241;
}
