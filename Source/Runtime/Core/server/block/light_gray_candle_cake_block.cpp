

#include "light_gray_candle_cake_block.h"

LightGrayCandleCakeBlock::LightGrayCandleCakeBlock() = default;
LightGrayCandleCakeBlock::~LightGrayCandleCakeBlock() = default;

short LightGrayCandleCakeBlock::getId() const {
  return 18603 + lit * 1;
}

std::shared_ptr<Block> LightGrayCandleCakeBlock::clone() const {
  std::shared_ptr<LightGrayCandleCakeBlock> copy = std::make_shared<LightGrayCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
