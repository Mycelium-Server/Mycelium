

#include "green_candle_block.h"

GreenCandleBlock::GreenCandleBlock() = default;
GreenCandleBlock::~GreenCandleBlock() = default;

short GreenCandleBlock::getId() const {
  return 18537 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> GreenCandleBlock::clone() const {
  std::shared_ptr<GreenCandleBlock> copy = std::make_shared<GreenCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
