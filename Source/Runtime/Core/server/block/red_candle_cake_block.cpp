

#include "red_candle_cake_block.h"

RedCandleCakeBlock::RedCandleCakeBlock() = default;
RedCandleCakeBlock::~RedCandleCakeBlock() = default;

short RedCandleCakeBlock::getId() const {
  return 18615 + lit * 1;
}

std::shared_ptr<Block> RedCandleCakeBlock::clone() const {
  std::shared_ptr<RedCandleCakeBlock> copy = std::make_shared<RedCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
