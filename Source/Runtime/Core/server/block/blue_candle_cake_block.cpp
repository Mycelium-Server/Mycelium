

#include "blue_candle_cake_block.h"

BlueCandleCakeBlock::BlueCandleCakeBlock() = default;
BlueCandleCakeBlock::~BlueCandleCakeBlock() = default;

short BlueCandleCakeBlock::getId() const {
  return 18609 + lit * 1;
}

std::shared_ptr<Block> BlueCandleCakeBlock::clone() const {
  std::shared_ptr<BlueCandleCakeBlock> copy = std::make_shared<BlueCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
