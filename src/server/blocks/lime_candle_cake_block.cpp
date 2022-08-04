#include "lime_candle_cake_block.h"

LimeCandleCakeBlock::LimeCandleCakeBlock() = default;
LimeCandleCakeBlock::~LimeCandleCakeBlock() = default;

short LimeCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18597;
  if (lit == LIT_FALSE) return 18598;
  return 18598;
}
