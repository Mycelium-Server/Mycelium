#include "black_candle_cake_block.h"

BlackCandleCakeBlock::BlackCandleCakeBlock() = default;
BlackCandleCakeBlock::~BlackCandleCakeBlock() = default;

short BlackCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18617;
  if (lit == LIT_FALSE) return 18618;
  return 18618;
}
