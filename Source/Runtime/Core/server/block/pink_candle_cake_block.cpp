

#include "pink_candle_cake_block.h"

PinkCandleCakeBlock::PinkCandleCakeBlock() = default;
PinkCandleCakeBlock::~PinkCandleCakeBlock() = default;

short PinkCandleCakeBlock::getId() const {
  return 18599 + lit * 1;
}

std::shared_ptr<Block> PinkCandleCakeBlock::clone() const {
  std::shared_ptr<PinkCandleCakeBlock> copy = std::make_shared<PinkCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
