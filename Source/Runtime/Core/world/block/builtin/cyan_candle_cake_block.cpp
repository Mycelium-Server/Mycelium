

#include "cyan_candle_cake_block.h"

CyanCandleCakeBlock::CyanCandleCakeBlock() = default;
CyanCandleCakeBlock::~CyanCandleCakeBlock() = default;

short CyanCandleCakeBlock::getId() const {
  return 18605 + lit * 1;
}

std::shared_ptr<Block> CyanCandleCakeBlock::clone() const {
  std::shared_ptr<CyanCandleCakeBlock> copy = std::make_shared<CyanCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
