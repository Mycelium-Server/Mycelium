

#include "brown_candle_block.h"

BrownCandleBlock::BrownCandleBlock() = default;
BrownCandleBlock::~BrownCandleBlock() = default;

short BrownCandleBlock::getId() const {
  return 18521 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> BrownCandleBlock::clone() const {
  std::shared_ptr<BrownCandleBlock> copy = std::make_shared<BrownCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
