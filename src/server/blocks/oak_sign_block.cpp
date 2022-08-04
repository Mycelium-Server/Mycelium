#include "oak_sign_block.h"

OakSignBlock::OakSignBlock() = default;
OakSignBlock::~OakSignBlock() = default;

short OakSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3636;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3637;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3638;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3639;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3640;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3641;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3642;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3643;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3644;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3645;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3646;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3647;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3648;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3649;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3650;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3651;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3652;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3653;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3654;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3655;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3656;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3657;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3658;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3659;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3660;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3661;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3662;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3663;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3664;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3665;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3666;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3667;
  return 3637;
}
