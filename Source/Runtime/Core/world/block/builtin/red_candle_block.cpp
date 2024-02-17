

#include "red_candle_block.h"

RedCandleBlock::RedCandleBlock() = default;
RedCandleBlock::~RedCandleBlock() = default;

short RedCandleBlock::getId() const {
  return 18553 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> RedCandleBlock::clone() const {
  std::shared_ptr<RedCandleBlock> copy = std::make_shared<RedCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
