#include "composter_block.h"

ComposterBlock::ComposterBlock() = default;
ComposterBlock::~ComposterBlock() = default;

short ComposterBlock::getId() const {
  if (level == LEVEL_0) return 16960;
  if (level == LEVEL_1) return 16961;
  if (level == LEVEL_2) return 16962;
  if (level == LEVEL_3) return 16963;
  if (level == LEVEL_4) return 16964;
  if (level == LEVEL_5) return 16965;
  if (level == LEVEL_6) return 16966;
  if (level == LEVEL_7) return 16967;
  if (level == LEVEL_8) return 16968;
  return 16960;
}
