

#include "candle_block.h"

CandleBlock::CandleBlock() = default;
CandleBlock::~CandleBlock() = default;

short CandleBlock::getId() const {
  return 18313 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> CandleBlock::clone() const {
  std::shared_ptr<CandleBlock> copy = std::make_shared<CandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
