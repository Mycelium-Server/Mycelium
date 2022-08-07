#include "blast_furnace_block.h"

BlastFurnaceBlock::BlastFurnaceBlock() = default;
BlastFurnaceBlock::~BlastFurnaceBlock() = default;

short BlastFurnaceBlock::getId() const {
  if (facing == FACING_NORTH && lit == LIT_TRUE) return 16016;
  if (facing == FACING_NORTH && lit == LIT_FALSE) return 16017;
  if (facing == FACING_SOUTH && lit == LIT_TRUE) return 16018;
  if (facing == FACING_SOUTH && lit == LIT_FALSE) return 16019;
  if (facing == FACING_WEST && lit == LIT_TRUE) return 16020;
  if (facing == FACING_WEST && lit == LIT_FALSE) return 16021;
  if (facing == FACING_EAST && lit == LIT_TRUE) return 16022;
  if (facing == FACING_EAST && lit == LIT_FALSE) return 16023;
  return 16017;
}
