

#include "white_candle_cake_block.h"

WhiteCandleCakeBlock::WhiteCandleCakeBlock() = default;
WhiteCandleCakeBlock::~WhiteCandleCakeBlock() = default;

short WhiteCandleCakeBlock::getId() const {
  return 18587 + lit * 1;
}

std::shared_ptr<Block> WhiteCandleCakeBlock::clone() const {
  std::shared_ptr<WhiteCandleCakeBlock> copy = std::make_shared<WhiteCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
