#include "player_head_block.h"

PlayerHeadBlock::PlayerHeadBlock() = default;
PlayerHeadBlock::~PlayerHeadBlock() = default;

short PlayerHeadBlock::getId() const {
  if (rotation == ROTATION_0) return 7167;
  if (rotation == ROTATION_1) return 7168;
  if (rotation == ROTATION_2) return 7169;
  if (rotation == ROTATION_3) return 7170;
  if (rotation == ROTATION_4) return 7171;
  if (rotation == ROTATION_5) return 7172;
  if (rotation == ROTATION_6) return 7173;
  if (rotation == ROTATION_7) return 7174;
  if (rotation == ROTATION_8) return 7175;
  if (rotation == ROTATION_9) return 7176;
  if (rotation == ROTATION_10) return 7177;
  if (rotation == ROTATION_11) return 7178;
  if (rotation == ROTATION_12) return 7179;
  if (rotation == ROTATION_13) return 7180;
  if (rotation == ROTATION_14) return 7181;
  if (rotation == ROTATION_15) return 7182;
  return 7167;
}
