

#include "green_candle_cake_block.h"

GreenCandleCakeBlock::GreenCandleCakeBlock() = default;
GreenCandleCakeBlock::~GreenCandleCakeBlock() = default;

short GreenCandleCakeBlock::getId() const {
  return 18613 + lit * 1;
}

std::shared_ptr<Block> GreenCandleCakeBlock::clone() const {
  std::shared_ptr<GreenCandleCakeBlock> copy = std::make_shared<GreenCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
