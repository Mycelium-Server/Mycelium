#include "blue_banner_block.h"

BlueBannerBlock::BlueBannerBlock() = default;
BlueBannerBlock::~BlueBannerBlock() = default;

short BlueBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8814;
  if (rotation == ROTATION_1) return 8815;
  if (rotation == ROTATION_2) return 8816;
  if (rotation == ROTATION_3) return 8817;
  if (rotation == ROTATION_4) return 8818;
  if (rotation == ROTATION_5) return 8819;
  if (rotation == ROTATION_6) return 8820;
  if (rotation == ROTATION_7) return 8821;
  if (rotation == ROTATION_8) return 8822;
  if (rotation == ROTATION_9) return 8823;
  if (rotation == ROTATION_10) return 8824;
  if (rotation == ROTATION_11) return 8825;
  if (rotation == ROTATION_12) return 8826;
  if (rotation == ROTATION_13) return 8827;
  if (rotation == ROTATION_14) return 8828;
  if (rotation == ROTATION_15) return 8829;
  return 8814;
}
