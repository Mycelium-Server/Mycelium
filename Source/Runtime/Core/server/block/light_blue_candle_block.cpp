

#include "light_blue_candle_block.h"

LightBlueCandleBlock::LightBlueCandleBlock() = default;
LightBlueCandleBlock::~LightBlueCandleBlock() = default;

short LightBlueCandleBlock::getId() const {
  return 18377 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> LightBlueCandleBlock::clone() const {
  std::shared_ptr<LightBlueCandleBlock> copy = std::make_shared<LightBlueCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
