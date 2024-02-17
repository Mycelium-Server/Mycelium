

#include "purple_candle_cake_block.h"

PurpleCandleCakeBlock::PurpleCandleCakeBlock() = default;
PurpleCandleCakeBlock::~PurpleCandleCakeBlock() = default;

short PurpleCandleCakeBlock::getId() const {
  return 18607 + lit * 1;
}

std::shared_ptr<Block> PurpleCandleCakeBlock::clone() const {
  std::shared_ptr<PurpleCandleCakeBlock> copy = std::make_shared<PurpleCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
