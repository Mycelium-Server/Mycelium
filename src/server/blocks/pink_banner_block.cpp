#include "pink_banner_block.h"

PinkBannerBlock::PinkBannerBlock() = default;
PinkBannerBlock::~PinkBannerBlock() = default;

short PinkBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8734;
  if (rotation == ROTATION_1) return 8735;
  if (rotation == ROTATION_2) return 8736;
  if (rotation == ROTATION_3) return 8737;
  if (rotation == ROTATION_4) return 8738;
  if (rotation == ROTATION_5) return 8739;
  if (rotation == ROTATION_6) return 8740;
  if (rotation == ROTATION_7) return 8741;
  if (rotation == ROTATION_8) return 8742;
  if (rotation == ROTATION_9) return 8743;
  if (rotation == ROTATION_10) return 8744;
  if (rotation == ROTATION_11) return 8745;
  if (rotation == ROTATION_12) return 8746;
  if (rotation == ROTATION_13) return 8747;
  if (rotation == ROTATION_14) return 8748;
  if (rotation == ROTATION_15) return 8749;
  return 8734;
}
