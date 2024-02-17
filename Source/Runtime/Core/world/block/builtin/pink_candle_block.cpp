

#include "pink_candle_block.h"

PinkCandleBlock::PinkCandleBlock() = default;
PinkCandleBlock::~PinkCandleBlock() = default;

short PinkCandleBlock::getId() const {
  return 18425 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> PinkCandleBlock::clone() const {
  std::shared_ptr<PinkCandleBlock> copy = std::make_shared<PinkCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
