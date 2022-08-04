#include "lava_block.h"

LavaBlock::LavaBlock() = default;
LavaBlock::~LavaBlock() = default;

short LavaBlock::getId() const {
  if (level == LEVEL_0) return 91;
  if (level == LEVEL_1) return 92;
  if (level == LEVEL_2) return 93;
  if (level == LEVEL_3) return 94;
  if (level == LEVEL_4) return 95;
  if (level == LEVEL_5) return 96;
  if (level == LEVEL_6) return 97;
  if (level == LEVEL_7) return 98;
  if (level == LEVEL_8) return 99;
  if (level == LEVEL_9) return 100;
  if (level == LEVEL_10) return 101;
  if (level == LEVEL_11) return 102;
  if (level == LEVEL_12) return 103;
  if (level == LEVEL_13) return 104;
  if (level == LEVEL_14) return 105;
  if (level == LEVEL_15) return 106;
  return 91;
}
