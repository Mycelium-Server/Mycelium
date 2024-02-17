

#include "light_blue_candle_cake_block.h"

LightBlueCandleCakeBlock::LightBlueCandleCakeBlock() = default;
LightBlueCandleCakeBlock::~LightBlueCandleCakeBlock() = default;

short LightBlueCandleCakeBlock::getId() const {
  return 18593 + lit * 1;
}

std::shared_ptr<Block> LightBlueCandleCakeBlock::clone() const {
  std::shared_ptr<LightBlueCandleCakeBlock> copy = std::make_shared<LightBlueCandleCakeBlock>();
  copy->lit = lit;
  return copy;
}
