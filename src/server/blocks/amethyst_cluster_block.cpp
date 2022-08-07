#include "amethyst_cluster_block.h"

AmethystClusterBlock::AmethystClusterBlock() = default;
AmethystClusterBlock::~AmethystClusterBlock() = default;

short AmethystClusterBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18621;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18622;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18623;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18624;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18625;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18626;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18627;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18628;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18629;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18630;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18631;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18632;
  return 18630;
}
