#include "white_candle_cake_block.h"

WhiteCandleCakeBlock::WhiteCandleCakeBlock() = default;
WhiteCandleCakeBlock::~WhiteCandleCakeBlock() = default;

short WhiteCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18587;
  if (lit == LIT_FALSE) return 18588;
  return 18588;
}
