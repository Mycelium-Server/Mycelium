#include "green_banner_block.h"

GreenBannerBlock::GreenBannerBlock() = default;
GreenBannerBlock::~GreenBannerBlock() = default;

short GreenBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8846;
  if (rotation == ROTATION_1) return 8847;
  if (rotation == ROTATION_2) return 8848;
  if (rotation == ROTATION_3) return 8849;
  if (rotation == ROTATION_4) return 8850;
  if (rotation == ROTATION_5) return 8851;
  if (rotation == ROTATION_6) return 8852;
  if (rotation == ROTATION_7) return 8853;
  if (rotation == ROTATION_8) return 8854;
  if (rotation == ROTATION_9) return 8855;
  if (rotation == ROTATION_10) return 8856;
  if (rotation == ROTATION_11) return 8857;
  if (rotation == ROTATION_12) return 8858;
  if (rotation == ROTATION_13) return 8859;
  if (rotation == ROTATION_14) return 8860;
  if (rotation == ROTATION_15) return 8861;
  return 8846;
}
