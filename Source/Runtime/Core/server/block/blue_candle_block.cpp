

#include "blue_candle_block.h"

BlueCandleBlock::BlueCandleBlock() = default;
BlueCandleBlock::~BlueCandleBlock() = default;

short BlueCandleBlock::getId() const {
  return 18505 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> BlueCandleBlock::clone() const {
  std::shared_ptr<BlueCandleBlock> copy = std::make_shared<BlueCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
