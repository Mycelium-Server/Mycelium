#include "respawn_anchor_block.h"

RespawnAnchorBlock::RespawnAnchorBlock() = default;
RespawnAnchorBlock::~RespawnAnchorBlock() = default;

short RespawnAnchorBlock::getId() const {
  if (charges == CHARGES_0) return 17038;
  if (charges == CHARGES_1) return 17039;
  if (charges == CHARGES_2) return 17040;
  if (charges == CHARGES_3) return 17041;
  if (charges == CHARGES_4) return 17042;
  return 17038;
}
