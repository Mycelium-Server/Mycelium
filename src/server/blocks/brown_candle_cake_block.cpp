#include "brown_candle_cake_block.h"

BrownCandleCakeBlock::BrownCandleCakeBlock() = default;
BrownCandleCakeBlock::~BrownCandleCakeBlock() = default;

short BrownCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18611;
  if (lit == LIT_FALSE) return 18612;
  return 18612;
}
