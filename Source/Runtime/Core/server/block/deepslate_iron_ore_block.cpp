

#include "deepslate_iron_ore_block.h"

DeepslateIronOreBlock::DeepslateIronOreBlock() = default;
DeepslateIronOreBlock::~DeepslateIronOreBlock() = default;

short DeepslateIronOreBlock::getId() const {
  return 113;
}

std::shared_ptr<Block> DeepslateIronOreBlock::clone() const {
  std::shared_ptr<DeepslateIronOreBlock> copy = std::make_shared<DeepslateIronOreBlock>();
  return copy;
}
