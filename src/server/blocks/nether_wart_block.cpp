#include "nether_wart_block.h"

NetherWartBlock::NetherWartBlock() = default;
NetherWartBlock::~NetherWartBlock() = default;

short NetherWartBlock::getId() const {
  if (age == AGE_0) return 5715;
  if (age == AGE_1) return 5716;
  if (age == AGE_2) return 5717;
  if (age == AGE_3) return 5718;
  return 5715;
}
