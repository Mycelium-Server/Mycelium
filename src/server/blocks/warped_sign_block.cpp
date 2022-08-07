#include "warped_sign_block.h"

WarpedSignBlock::WarpedSignBlock() = default;
WarpedSignBlock::~WarpedSignBlock() = default;

short WarpedSignBlock::getId() const {
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_TRUE) return 16896;
  if (rotation == ROTATION_0 && waterlogged == WATERLOGGED_FALSE) return 16897;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_TRUE) return 16898;
  if (rotation == ROTATION_1 && waterlogged == WATERLOGGED_FALSE) return 16899;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_TRUE) return 16900;
  if (rotation == ROTATION_2 && waterlogged == WATERLOGGED_FALSE) return 16901;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_TRUE) return 16902;
  if (rotation == ROTATION_3 && waterlogged == WATERLOGGED_FALSE) return 16903;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_TRUE) return 16904;
  if (rotation == ROTATION_4 && waterlogged == WATERLOGGED_FALSE) return 16905;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_TRUE) return 16906;
  if (rotation == ROTATION_5 && waterlogged == WATERLOGGED_FALSE) return 16907;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_TRUE) return 16908;
  if (rotation == ROTATION_6 && waterlogged == WATERLOGGED_FALSE) return 16909;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_TRUE) return 16910;
  if (rotation == ROTATION_7 && waterlogged == WATERLOGGED_FALSE) return 16911;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_TRUE) return 16912;
  if (rotation == ROTATION_8 && waterlogged == WATERLOGGED_FALSE) return 16913;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_TRUE) return 16914;
  if (rotation == ROTATION_9 && waterlogged == WATERLOGGED_FALSE) return 16915;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_TRUE) return 16916;
  if (rotation == ROTATION_10 && waterlogged == WATERLOGGED_FALSE) return 16917;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_TRUE) return 16918;
  if (rotation == ROTATION_11 && waterlogged == WATERLOGGED_FALSE) return 16919;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_TRUE) return 16920;
  if (rotation == ROTATION_12 && waterlogged == WATERLOGGED_FALSE) return 16921;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_TRUE) return 16922;
  if (rotation == ROTATION_13 && waterlogged == WATERLOGGED_FALSE) return 16923;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_TRUE) return 16924;
  if (rotation == ROTATION_14 && waterlogged == WATERLOGGED_FALSE) return 16925;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_TRUE) return 16926;
  if (rotation == ROTATION_15 && waterlogged == WATERLOGGED_FALSE) return 16927;
  return 16897;
}
