

#include "iron_ore_block.h"

IronOreBlock::IronOreBlock() = default;
IronOreBlock::~IronOreBlock() = default;

short IronOreBlock::getId() const {
  return 112;
}

std::shared_ptr<Block> IronOreBlock::clone() const {
  std::shared_ptr<IronOreBlock> copy = std::make_shared<IronOreBlock>();
  return copy;
}
