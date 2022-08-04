#include "zombie_head_block.h"

ZombieHeadBlock::ZombieHeadBlock() = default;
ZombieHeadBlock::~ZombieHeadBlock() = default;

short ZombieHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7147;
  if (rotation == ROTATION_1) return 7148;
  if (rotation == ROTATION_2) return 7149;
  if (rotation == ROTATION_3) return 7150;
  if (rotation == ROTATION_4) return 7151;
  if (rotation == ROTATION_5) return 7152;
  if (rotation == ROTATION_6) return 7153;
  if (rotation == ROTATION_7) return 7154;
  if (rotation == ROTATION_8) return 7155;
  if (rotation == ROTATION_9) return 7156;
  if (rotation == ROTATION_10) return 7157;
  if (rotation == ROTATION_11) return 7158;
  if (rotation == ROTATION_12) return 7159;
  if (rotation == ROTATION_13) return 7160;
  if (rotation == ROTATION_14) return 7161;
  if (rotation == ROTATION_15) return 7162;
  return 7147;
}
