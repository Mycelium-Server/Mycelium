#include "white_banner_block.h"

WhiteBannerBlock::WhiteBannerBlock() = default;
WhiteBannerBlock::~WhiteBannerBlock() = default;

short WhiteBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8638;
  if (rotation == ROTATION_1) return 8639;
  if (rotation == ROTATION_2) return 8640;
  if (rotation == ROTATION_3) return 8641;
  if (rotation == ROTATION_4) return 8642;
  if (rotation == ROTATION_5) return 8643;
  if (rotation == ROTATION_6) return 8644;
  if (rotation == ROTATION_7) return 8645;
  if (rotation == ROTATION_8) return 8646;
  if (rotation == ROTATION_9) return 8647;
  if (rotation == ROTATION_10) return 8648;
  if (rotation == ROTATION_11) return 8649;
  if (rotation == ROTATION_12) return 8650;
  if (rotation == ROTATION_13) return 8651;
  if (rotation == ROTATION_14) return 8652;
  if (rotation == ROTATION_15) return 8653;
  return 8638;
}
