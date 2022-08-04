#include "light_gray_banner_block.h"

LightGrayBannerBlock::LightGrayBannerBlock() = default;
LightGrayBannerBlock::~LightGrayBannerBlock() = default;

short LightGrayBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8766;
  if (rotation == ROTATION_1) return 8767;
  if (rotation == ROTATION_2) return 8768;
  if (rotation == ROTATION_3) return 8769;
  if (rotation == ROTATION_4) return 8770;
  if (rotation == ROTATION_5) return 8771;
  if (rotation == ROTATION_6) return 8772;
  if (rotation == ROTATION_7) return 8773;
  if (rotation == ROTATION_8) return 8774;
  if (rotation == ROTATION_9) return 8775;
  if (rotation == ROTATION_10) return 8776;
  if (rotation == ROTATION_11) return 8777;
  if (rotation == ROTATION_12) return 8778;
  if (rotation == ROTATION_13) return 8779;
  if (rotation == ROTATION_14) return 8780;
  if (rotation == ROTATION_15) return 8781;
  return 8766;
}
