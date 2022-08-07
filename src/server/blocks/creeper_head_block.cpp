#include "creeper_head_block.h"

CreeperHeadBlock::CreeperHeadBlock() = default;
CreeperHeadBlock::~CreeperHeadBlock() = default;

short CreeperHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7187;
  if (rotation == ROTATION_1) return 7188;
  if (rotation == ROTATION_2) return 7189;
  if (rotation == ROTATION_3) return 7190;
  if (rotation == ROTATION_4) return 7191;
  if (rotation == ROTATION_5) return 7192;
  if (rotation == ROTATION_6) return 7193;
  if (rotation == ROTATION_7) return 7194;
  if (rotation == ROTATION_8) return 7195;
  if (rotation == ROTATION_9) return 7196;
  if (rotation == ROTATION_10) return 7197;
  if (rotation == ROTATION_11) return 7198;
  if (rotation == ROTATION_12) return 7199;
  if (rotation == ROTATION_13) return 7200;
  if (rotation == ROTATION_14) return 7201;
  if (rotation == ROTATION_15) return 7202;
  return 7187;
}
