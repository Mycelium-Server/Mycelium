#include "ender_chest_block.h"

EnderChestBlock::EnderChestBlock() = default;
EnderChestBlock::~EnderChestBlock() = default;

short EnderChestBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 5843;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 5844;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 5845;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 5846;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 5847;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 5848;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 5849;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 5850;
  return 5844;
}
