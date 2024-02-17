

#include "orange_candle_block.h"

OrangeCandleBlock::OrangeCandleBlock() = default;
OrangeCandleBlock::~OrangeCandleBlock() = default;

short OrangeCandleBlock::getId() const {
  return 18345 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> OrangeCandleBlock::clone() const {
  std::shared_ptr<OrangeCandleBlock> copy = std::make_shared<OrangeCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
