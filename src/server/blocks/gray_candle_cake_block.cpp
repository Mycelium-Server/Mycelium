#include "gray_candle_cake_block.h"

GrayCandleCakeBlock::GrayCandleCakeBlock() = default;
GrayCandleCakeBlock::~GrayCandleCakeBlock() = default;

short GrayCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18601;
  if (lit == LIT_FALSE) return 18602;
  return 18602;
}
