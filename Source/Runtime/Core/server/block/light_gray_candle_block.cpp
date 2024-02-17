

#include "light_gray_candle_block.h"

LightGrayCandleBlock::LightGrayCandleBlock() = default;
LightGrayCandleBlock::~LightGrayCandleBlock() = default;

short LightGrayCandleBlock::getId() const {
  return 18457 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> LightGrayCandleBlock::clone() const {
  std::shared_ptr<LightGrayCandleBlock> copy = std::make_shared<LightGrayCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
