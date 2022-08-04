#include "redstone_wall_torch_block.h"

RedstoneWallTorchBlock::RedstoneWallTorchBlock() = default;
RedstoneWallTorchBlock::~RedstoneWallTorchBlock() = default;

short RedstoneWallTorchBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 4198;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 4199;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 4200;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 4201;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 4202;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 4203;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 4204;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 4205;
  return 4198;
}
