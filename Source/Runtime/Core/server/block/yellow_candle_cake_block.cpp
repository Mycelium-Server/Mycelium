

#include "yellow_candle_cake_block.h"

YellowCandleCakeBlock::YellowCandleCakeBlock() = default;
YellowCandleCakeBlock::~YellowCandleCakeBlock() = default;

short YellowCandleCakeBlock::getId() const {
  return 18595 + lit * 1;
}

std::shared_ptr<Block> YellowCandleCakeBlock::clone() const {
  std::shared_ptr<YellowCandleCakeBlock> copy = std::make_shared<YellowCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
