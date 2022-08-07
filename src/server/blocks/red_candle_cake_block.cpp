#include "red_candle_cake_block.h"

RedCandleCakeBlock::RedCandleCakeBlock() = default;
RedCandleCakeBlock::~RedCandleCakeBlock() = default;

short RedCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18615;
  if (lit == LIT_FALSE) return 18616;
  return 18616;
}
