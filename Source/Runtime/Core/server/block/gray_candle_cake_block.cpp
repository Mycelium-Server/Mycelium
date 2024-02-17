

#include "gray_candle_cake_block.h"

GrayCandleCakeBlock::GrayCandleCakeBlock() = default;
GrayCandleCakeBlock::~GrayCandleCakeBlock() = default;

short GrayCandleCakeBlock::getId() const {
  return 18601 + lit * 1;
}

std::shared_ptr<Block> GrayCandleCakeBlock::clone() const {
  std::shared_ptr<GrayCandleCakeBlock> copy = std::make_shared<GrayCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
