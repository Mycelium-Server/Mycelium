#include "dark_oak_sign_block.h"

DarkOakSignBlock::DarkOakSignBlock() = default;
DarkOakSignBlock::~DarkOakSignBlock() = default;

short DarkOakSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3796;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3797;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3798;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3799;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3800;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3801;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3802;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3803;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3804;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3805;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3806;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3807;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3808;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3809;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3810;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3811;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3812;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3813;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3814;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3815;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3816;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3817;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3818;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3819;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3820;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3821;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3822;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3823;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3824;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3825;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3826;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3827;
  return 3797;
}