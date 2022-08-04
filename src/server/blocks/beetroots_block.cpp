#include "beetroots_block.h"

BeetrootsBlock::BeetrootsBlock() = default;
BeetrootsBlock::~BeetrootsBlock() = default;

short BeetrootsBlock::getId() const {
  if (age == AGE_0) return 10100;
  if (age == AGE_1) return 10101;
  if (age == AGE_2) return 10102;
  if (age == AGE_3) return 10103;
  return 10100;
}
