#include "cyan_banner_block.h"

CyanBannerBlock::CyanBannerBlock() = default;
CyanBannerBlock::~CyanBannerBlock() = default;

short CyanBannerBlock::getId() const {
  if (rotation == ROTATION_0) return 8782;
  if (rotation == ROTATION_1) return 8783;
  if (rotation == ROTATION_2) return 8784;
  if (rotation == ROTATION_3) return 8785;
  if (rotation == ROTATION_4) return 8786;
  if (rotation == ROTATION_5) return 8787;
  if (rotation == ROTATION_6) return 8788;
  if (rotation == ROTATION_7) return 8789;
  if (rotation == ROTATION_8) return 8790;
  if (rotation == ROTATION_9) return 8791;
  if (rotation == ROTATION_10) return 8792;
  if (rotation == ROTATION_11) return 8793;
  if (rotation == ROTATION_12) return 8794;
  if (rotation == ROTATION_13) return 8795;
  if (rotation == ROTATION_14) return 8796;
  if (rotation == ROTATION_15) return 8797;
  return 8782;
}
