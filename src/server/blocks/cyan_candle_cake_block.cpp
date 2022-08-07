#include "cyan_candle_cake_block.h"

CyanCandleCakeBlock::CyanCandleCakeBlock() = default;
CyanCandleCakeBlock::~CyanCandleCakeBlock() = default;

short CyanCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18605;
  if (lit == LIT_FALSE) return 18606;
  return 18606;
}
