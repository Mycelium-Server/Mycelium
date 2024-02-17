

#include "deepslate_gold_ore_block.h"

DeepslateGoldOreBlock::DeepslateGoldOreBlock() = default;
DeepslateGoldOreBlock::~DeepslateGoldOreBlock() = default;

short DeepslateGoldOreBlock::getId() const {
  return 111;
}

std::shared_ptr<Block> DeepslateGoldOreBlock::clone() const {
  std::shared_ptr<DeepslateGoldOreBlock> copy = std::make_shared<DeepslateGoldOreBlock>();
  return copy;
}
