

#include "gold_ore_block.h"

GoldOreBlock::GoldOreBlock() = default;
GoldOreBlock::~GoldOreBlock() = default;

short GoldOreBlock::getId() const {
  return 110;
}

std::shared_ptr<Block> GoldOreBlock::clone() const {
  std::shared_ptr<GoldOreBlock> copy = std::make_shared<GoldOreBlock>();
  return copy;
}
