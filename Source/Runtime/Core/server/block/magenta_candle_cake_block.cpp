

#include "magenta_candle_cake_block.h"

MagentaCandleCakeBlock::MagentaCandleCakeBlock() = default;
MagentaCandleCakeBlock::~MagentaCandleCakeBlock() = default;

short MagentaCandleCakeBlock::getId() const {
  return 18591 + lit * 1;
}

std::shared_ptr<Block> MagentaCandleCakeBlock::clone() const {
  std::shared_ptr<MagentaCandleCakeBlock> copy = std::make_shared<MagentaCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
