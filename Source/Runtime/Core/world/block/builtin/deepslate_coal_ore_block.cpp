

#include "deepslate_coal_ore_block.h"

DeepslateCoalOreBlock::DeepslateCoalOreBlock() = default;
DeepslateCoalOreBlock::~DeepslateCoalOreBlock() = default;

short DeepslateCoalOreBlock::getId() const {
  return 115;
}

std::shared_ptr<Block> DeepslateCoalOreBlock::clone() const {
  std::shared_ptr<DeepslateCoalOreBlock> copy = std::make_shared<DeepslateCoalOreBlock>();
  return copy;
}
