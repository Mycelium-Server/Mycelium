#include "magenta_candle_cake_block.h"

MagentaCandleCakeBlock::MagentaCandleCakeBlock() = default;
MagentaCandleCakeBlock::~MagentaCandleCakeBlock() = default;

short MagentaCandleCakeBlock::getId() const {
  if (lit == LIT_TRUE) return 18591;
  if (lit == LIT_FALSE) return 18592;
  return 18592;
}
