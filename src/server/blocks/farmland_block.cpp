#include "farmland_block.h"

FarmlandBlock::FarmlandBlock() = default;
FarmlandBlock::~FarmlandBlock() = default;

short FarmlandBlock::getId() const {
  if (moisture == MOISTURE_0) return 3620;
  if (moisture == MOISTURE_1) return 3621;
  if (moisture == MOISTURE_2) return 3622;
  if (moisture == MOISTURE_3) return 3623;
  if (moisture == MOISTURE_4) return 3624;
  if (moisture == MOISTURE_5) return 3625;
  if (moisture == MOISTURE_6) return 3626;
  if (moisture == MOISTURE_7) return 3627;
  return 3620;
}
