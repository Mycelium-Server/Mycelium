#include "orange_banner_block.h"

OrangeBannerBlock::OrangeBannerBlock() = default;
OrangeBannerBlock::~OrangeBannerBlock() = default;

short OrangeBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8654;
  if (rotation == ROTATION_1) return 8655;
  if (rotation == ROTATION_2) return 8656;
  if (rotation == ROTATION_3) return 8657;
  if (rotation == ROTATION_4) return 8658;
  if (rotation == ROTATION_5) return 8659;
  if (rotation == ROTATION_6) return 8660;
  if (rotation == ROTATION_7) return 8661;
  if (rotation == ROTATION_8) return 8662;
  if (rotation == ROTATION_9) return 8663;
  if (rotation == ROTATION_10) return 8664;
  if (rotation == ROTATION_11) return 8665;
  if (rotation == ROTATION_12) return 8666;
  if (rotation == ROTATION_13) return 8667;
  if (rotation == ROTATION_14) return 8668;
  if (rotation == ROTATION_15) return 8669;
  return 8654;
}