

#include "black_candle_cake_block.h"

BlackCandleCakeBlock::BlackCandleCakeBlock() = default;
BlackCandleCakeBlock::~BlackCandleCakeBlock() = default;

short BlackCandleCakeBlock::getId() const {
  return 18617 + lit * 1;
}

std::shared_ptr<Block> BlackCandleCakeBlock::clone() const {
  std::shared_ptr<BlackCandleCakeBlock> copy = std::make_shared<BlackCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
