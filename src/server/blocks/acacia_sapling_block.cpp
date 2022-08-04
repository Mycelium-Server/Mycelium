#include "acacia_sapling_block.h"

AcaciaSaplingBlock::AcaciaSaplingBlock() = default;
AcaciaSaplingBlock::~AcaciaSaplingBlock() = default;

short AcaciaSaplingBlock::getId() const {
  if (stage == STAGE_0) return 30;
  if (stage == STAGE_1) return 31;
  return 30;
}
