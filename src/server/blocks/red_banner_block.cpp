#include "red_banner_block.h"

RedBannerBlock::RedBannerBlock() = default;
RedBannerBlock::~RedBannerBlock() = default;

short RedBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8862;
  if (rotation == ROTATION_1) return 8863;
  if (rotation == ROTATION_2) return 8864;
  if (rotation == ROTATION_3) return 8865;
  if (rotation == ROTATION_4) return 8866;
  if (rotation == ROTATION_5) return 8867;
  if (rotation == ROTATION_6) return 8868;
  if (rotation == ROTATION_7) return 8869;
  if (rotation == ROTATION_8) return 8870;
  if (rotation == ROTATION_9) return 8871;
  if (rotation == ROTATION_10) return 8872;
  if (rotation == ROTATION_11) return 8873;
  if (rotation == ROTATION_12) return 8874;
  if (rotation == ROTATION_13) return 8875;
  if (rotation == ROTATION_14) return 8876;
  if (rotation == ROTATION_15) return 8877;
  return 8862;
}
