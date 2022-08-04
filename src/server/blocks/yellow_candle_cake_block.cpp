#include "yellow_candle_cake_block.h"

YellowCandleCakeBlock::YellowCandleCakeBlock() = default;
YellowCandleCakeBlock::~YellowCandleCakeBlock() = default;

short YellowCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18595;
  if (lit == LIT_FALSE) return 18596;
  return 18596;
}
