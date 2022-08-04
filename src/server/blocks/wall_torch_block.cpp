#include "wall_torch_block.h"

WallTorchBlock::WallTorchBlock() = default;
WallTorchBlock::~WallTorchBlock() = default;

short WallTorchBlock::getId() const {
  if (facing == FACING_NORTH) return 1690;
  if (facing == FACING_SOUTH) return 1691;
  if (facing == FACING_WEST) return 1692;
  if (facing == FACING_EAST) return 1693;
  return 1690;
}
