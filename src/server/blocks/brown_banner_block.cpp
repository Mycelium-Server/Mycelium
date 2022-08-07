#include "brown_banner_block.h"

BrownBannerBlock::BrownBannerBlock() = default;
BrownBannerBlock::~BrownBannerBlock() = default;

short BrownBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8830;
  if (rotation == ROTATION_1) return 8831;
  if (rotation == ROTATION_2) return 8832;
  if (rotation == ROTATION_3) return 8833;
  if (rotation == ROTATION_4) return 8834;
  if (rotation == ROTATION_5) return 8835;
  if (rotation == ROTATION_6) return 8836;
  if (rotation == ROTATION_7) return 8837;
  if (rotation == ROTATION_8) return 8838;
  if (rotation == ROTATION_9) return 8839;
  if (rotation == ROTATION_10) return 8840;
  if (rotation == ROTATION_11) return 8841;
  if (rotation == ROTATION_12) return 8842;
  if (rotation == ROTATION_13) return 8843;
  if (rotation == ROTATION_14) return 8844;
  if (rotation == ROTATION_15) return 8845;
  return 8830;
}
