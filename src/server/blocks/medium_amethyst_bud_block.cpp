#include "medium_amethyst_bud_block.h"

MediumAmethystBudBlock::MediumAmethystBudBlock() = default;
MediumAmethystBudBlock::~MediumAmethystBudBlock() = default;

short MediumAmethystBudBlock::getId() const {
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_TRUE) return 18645;
  if (facing == FACING_NORTH && waterlogged == WATERLOGGED_FALSE) return 18646;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_TRUE) return 18647;
  if (facing == FACING_EAST && waterlogged == WATERLOGGED_FALSE) return 18648;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 18649;
  if (facing == FACING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 18650;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_TRUE) return 18651;
  if (facing == FACING_WEST && waterlogged == WATERLOGGED_FALSE) return 18652;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_TRUE) return 18653;
  if (facing == FACING_UP && waterlogged == WATERLOGGED_FALSE) return 18654;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_TRUE) return 18655;
  if (facing == FACING_DOWN && waterlogged == WATERLOGGED_FALSE) return 18656;
  return 18654;
}
