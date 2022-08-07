#include "blue_candle_cake_block.h"

BlueCandleCakeBlock::BlueCandleCakeBlock() = default;
BlueCandleCakeBlock::~BlueCandleCakeBlock() = default;

short BlueCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18609;
  if (lit == LIT_FALSE) return 18610;
  return 18610;
}
