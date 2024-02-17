

#include "cyan_candle_block.h"

CyanCandleBlock::CyanCandleBlock() = default;
CyanCandleBlock::~CyanCandleBlock() = default;

short CyanCandleBlock::getId() const {
  return 18473 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> CyanCandleBlock::clone() const {
  std::shared_ptr<CyanCandleBlock> copy = std::make_shared<CyanCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
