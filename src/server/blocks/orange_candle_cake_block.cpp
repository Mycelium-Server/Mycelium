#include "orange_candle_cake_block.h"

OrangeCandleCakeBlock::OrangeCandleCakeBlock() = default;
OrangeCandleCakeBlock::~OrangeCandleCakeBlock() = default;

short OrangeCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18589;
  if (lit == LIT_FALSE) return 18590;
  return 18590;
}
