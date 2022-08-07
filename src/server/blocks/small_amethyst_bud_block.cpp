#include "small_amethyst_bud_block.h"

SmallAmethystBudBlock::SmallAmethystBudBlock() = default;
SmallAmethystBudBlock::~SmallAmethystBudBlock() = default;

short SmallAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18657;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18658;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18659;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18660;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18661;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18662;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18663;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18664;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18665;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18666;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18667;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18668;
  return 18666;
}
