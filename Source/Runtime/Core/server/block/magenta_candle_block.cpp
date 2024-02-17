

#include "magenta_candle_block.h"

MagentaCandleBlock::MagentaCandleBlock() = default;
MagentaCandleBlock::~MagentaCandleBlock() = default;

short MagentaCandleBlock::getId() const {
  return 18361 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> MagentaCandleBlock::clone() const {
  std::shared_ptr<MagentaCandleBlock> copy = std::make_shared<MagentaCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
