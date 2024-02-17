

#include "purple_candle_block.h"

PurpleCandleBlock::PurpleCandleBlock() = default;
PurpleCandleBlock::~PurpleCandleBlock() = default;

short PurpleCandleBlock::getId() const {
  return 18489 + waterlogged * 1 + lit * 2 + candles * 4;
}

std::shared_ptr<Block> PurpleCandleBlock::clone() const {
  std::shared_ptr<PurpleCandleBlock> copy = std::make_shared<PurpleCandleBlock>();
  copy->candles = candles;
  copy->lit = lit;
  copy->waterlogged = waterlogged;
  return copy;
}
