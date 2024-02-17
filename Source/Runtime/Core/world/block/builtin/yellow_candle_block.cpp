

#include "yellow_candle_block.h"

YellowCandleBlock::YellowCandleBlock() = default;
YellowCandleBlock::~YellowCandleBlock() = default;

short YellowCandleBlock::getId() const {
  return 18393 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> YellowCandleBlock::clone() const {
  std::shared_ptr<YellowCandleBlock> copy = std::make_shared<YellowCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
