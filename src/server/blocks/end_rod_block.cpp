#include "end_rod_block.h"

EndRodBlock::EndRodBlock() = default;
EndRodBlock::~EndRodBlock() = default;

short EndRodBlock::getId() const {
  if (facing == FACING_NORTH) return 9939;
  if (facing == FACING_EAST) return 9940;
  if (facing == FACING_SOUTH) return 9941;
  if (facing == FACING_WEST) return 9942;
  if (facing == FACING_UP) return 9943;
  if (facing == FACING_DOWN) return 9944;
  return 9943;
}
