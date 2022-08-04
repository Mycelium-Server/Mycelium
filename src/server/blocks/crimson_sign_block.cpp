#include "crimson_sign_block.h"

CrimsonSignBlock::CrimsonSignBlock() = default;
CrimsonSignBlock::~CrimsonSignBlock() = default;

short CrimsonSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 16864;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 16865;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 16866;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 16867;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 16868;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 16869;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 16870;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 16871;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 16872;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 16873;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 16874;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 16875;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 16876;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 16877;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 16878;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 16879;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 16880;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 16881;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 16882;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 16883;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 16884;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 16885;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 16886;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 16887;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 16888;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 16889;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 16890;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 16891;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 16892;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 16893;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 16894;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 16895;
  return 16865;
}
