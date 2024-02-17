

#include "lime_candle_cake_block.h"

LimeCandleCakeBlock::LimeCandleCakeBlock() = default;
LimeCandleCakeBlock::~LimeCandleCakeBlock() = default;

short LimeCandleCakeBlock::getId() const {
  return 18597 + lit * 1;
}

std::shared_ptr<Block> LimeCandleCakeBlock::clone() const {
  std::shared_ptr<LimeCandleCakeBlock> copy = std::make_shared<LimeCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
