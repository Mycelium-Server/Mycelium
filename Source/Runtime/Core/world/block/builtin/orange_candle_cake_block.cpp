

#include "orange_candle_cake_block.h"

OrangeCandleCakeBlock::OrangeCandleCakeBlock() = default;
OrangeCandleCakeBlock::~OrangeCandleCakeBlock() = default;

short OrangeCandleCakeBlock::getId() const {
  return 18589 + lit * 1;
}

std::shared_ptr<Block> OrangeCandleCakeBlock::clone() const {
  std::shared_ptr<OrangeCandleCakeBlock> copy = std::make_shared<OrangeCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
