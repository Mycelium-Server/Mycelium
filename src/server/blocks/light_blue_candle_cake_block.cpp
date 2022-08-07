#include "light_blue_candle_cake_block.h"

LightBlueCandleCakeBlock::LightBlueCandleCakeBlock() = default;
LightBlueCandleCakeBlock::~LightBlueCandleCakeBlock() = default;

short LightBlueCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18593;
  if (lit == LIT_FALSE) return 18594;
  return 18594;
}
