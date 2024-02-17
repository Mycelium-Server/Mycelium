

#include "gray_candle_block.h"

GrayCandleBlock::GrayCandleBlock() = default;
GrayCandleBlock::~GrayCandleBlock() = default;

short GrayCandleBlock::getId() const {
  return 18441 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> GrayCandleBlock::clone() const {
  std::shared_ptr<GrayCandleBlock> copy = std::make_shared<GrayCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
