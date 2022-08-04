#include "jungle_sign_block.h"

JungleSignBlock::JungleSignBlock() = default;
JungleSignBlock::~JungleSignBlock() = default;

short JungleSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 3764;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 3765;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 3766;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 3767;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 3768;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 3769;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 3770;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 3771;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 3772;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 3773;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 3774;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 3775;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 3776;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 3777;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 3778;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 3779;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 3780;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 3781;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 3782;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 3783;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 3784;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 3785;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 3786;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 3787;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 3788;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 3789;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 3790;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 3791;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 3792;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 3793;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 3794;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 3795;
  return 3765;
}
