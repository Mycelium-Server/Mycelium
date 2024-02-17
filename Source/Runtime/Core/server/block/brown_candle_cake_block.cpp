

#include "brown_candle_cake_block.h"

BrownCandleCakeBlock::BrownCandleCakeBlock() = default;
BrownCandleCakeBlock::~BrownCandleCakeBlock() = default;

short BrownCandleCakeBlock::getId() const {
  return 18611 + lit * 1;
}

std::shared_ptr<Block> BrownCandleCakeBlock::clone() const {
  std::shared_ptr<BrownCandleCakeBlock> copy = std::make_shared<BrownCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
