#include "large_amethyst_bud_block.h"

LargeAmethystBudBlock::LargeAmethystBudBlock() = default;
LargeAmethystBudBlock::~LargeAmethystBudBlock() = default;

short LargeAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18633;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18634;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18635;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18636;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18637;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18638;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18639;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18640;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18641;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18642;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18643;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18644;
  return 18642;
}
