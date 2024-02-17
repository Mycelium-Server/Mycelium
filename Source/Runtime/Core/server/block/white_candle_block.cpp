

#include "white_candle_block.h"

WhiteCandleBlock::WhiteCandleBlock() = default;
WhiteCandleBlock::~WhiteCandleBlock() = default;

short WhiteCandleBlock::getId() const {
  return 18329 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> WhiteCandleBlock::clone() const {
  std::shared_ptr<WhiteCandleBlock> copy = std::make_shared<WhiteCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
