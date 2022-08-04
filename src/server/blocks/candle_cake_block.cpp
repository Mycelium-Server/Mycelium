#include "candle_cake_block.h"

CandleCakeBlock::CandleCakeBlock() = default;
CandleCakeBlock::~CandleCakeBlock() = default;

short CandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18585;
  if (lit == LIT_FALSE) return 18586;
  return 18586;
}
