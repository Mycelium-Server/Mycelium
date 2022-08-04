#include "light_gray_candle_cake_block.h"

LightGrayCandleCakeBlock::LightGrayCandleCakeBlock() = default;
LightGrayCandleCakeBlock::~LightGrayCandleCakeBlock() = default;

short LightGrayCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18603;
  if (lit == LIT_FALSE) return 18604;
  return 18604;
}
