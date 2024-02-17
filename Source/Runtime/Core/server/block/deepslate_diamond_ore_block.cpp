

#include "deepslate_diamond_ore_block.h"

DeepslateDiamondOreBlock::DeepslateDiamondOreBlock() = default;
DeepslateDiamondOreBlock::~DeepslateDiamondOreBlock() = default;

short DeepslateDiamondOreBlock::getId() const {
  return 3609;
}

std::shared_ptr<Block> DeepslateDiamondOreBlock::clone() const {
  std::shared_ptr<DeepslateDiamondOreBlock> copy = std::make_shared<DeepslateDiamondOreBlock>();
  return copy;
}
