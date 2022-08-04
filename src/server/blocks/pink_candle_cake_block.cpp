#include "pink_candle_cake_block.h"

PinkCandleCakeBlock::PinkCandleCakeBlock() = default;
PinkCandleCakeBlock::~PinkCandleCakeBlock() = default;

short PinkCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18599;
  if (lit == LIT_FALSE) return 18600;
  return 18600;
}
