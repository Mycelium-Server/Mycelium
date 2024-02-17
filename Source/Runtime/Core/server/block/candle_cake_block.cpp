

#include "candle_cake_block.h"

CandleCakeBlock::CandleCakeBlock() = default;
CandleCakeBlock::~CandleCakeBlock() = default;

short CandleCakeBlock::getId() const {
  return 18585 + lit * 1;
}

std::shared_ptr<Block> CandleCakeBlock::clone() const {
  std::shared_ptr<CandleCakeBlock> copy = std::make_shared<CandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
