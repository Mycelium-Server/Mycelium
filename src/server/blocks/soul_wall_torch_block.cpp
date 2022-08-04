#include "soul_wall_torch_block.h"

SoulWallTorchBlock::SoulWallTorchBlock() = default;
SoulWallTorchBlock::~SoulWallTorchBlock() = default;

short SoulWallTorchBlock::getId() const {
  if (facing == FACING_NORTH) return 4318;
  if (facing == FACING_SOUTH) return 4319;
  if (facing == FACING_WEST) return 4320;
  if (facing == FACING_EAST) return 4321;
  return 4318;
}
