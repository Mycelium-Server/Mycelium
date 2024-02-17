

#include "deepslate_copper_ore_block.h"

DeepslateCopperOreBlock::DeepslateCopperOreBlock() = default;
DeepslateCopperOreBlock::~DeepslateCopperOreBlock() = default;

short DeepslateCopperOreBlock::getId() const {
  return 18913;
}

std::shared_ptr<Block> DeepslateCopperOreBlock::clone() const {
  std::shared_ptr<DeepslateCopperOreBlock> copy = std::make_shared<DeepslateCopperOreBlock>();
  return copy;
}
