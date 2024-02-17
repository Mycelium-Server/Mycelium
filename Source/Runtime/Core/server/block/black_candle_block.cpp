

#include "black_candle_block.h"

BlackCandleBlock::BlackCandleBlock() = default;
BlackCandleBlock::~BlackCandleBlock() = default;

short BlackCandleBlock::getId() const {
  return 18569 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> BlackCandleBlock::clone() const {
  std::shared_ptr<BlackCandleBlock> copy = std::make_shared<BlackCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
