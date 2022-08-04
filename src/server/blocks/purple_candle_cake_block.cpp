#include "purple_candle_cake_block.h"

PurpleCandleCakeBlock::PurpleCandleCakeBlock() = default;
PurpleCandleCakeBlock::~PurpleCandleCakeBlock() = default;

short PurpleCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18607;
  if (lit == LIT_FALSE) return 18608;
  return 18608;
}
