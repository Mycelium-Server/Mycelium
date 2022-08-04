#include "green_candle_cake_block.h"

GreenCandleCakeBlock::GreenCandleCakeBlock() = default;
GreenCandleCakeBlock::~GreenCandleCakeBlock() = default;

short GreenCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18613;
  if (lit == LIT_FALSE) return 18614;
  return 18614;
}
