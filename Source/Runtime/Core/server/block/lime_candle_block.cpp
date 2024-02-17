

#include "lime_candle_block.h"

LimeCandleBlock::LimeCandleBlock() = default;
LimeCandleBlock::~LimeCandleBlock() = default;

short LimeCandleBlock::getId() const {
  return 18409 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> LimeCandleBlock::clone() const {
  std::shared_ptr<LimeCandleBlock> copy = std::make_shared<LimeCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
