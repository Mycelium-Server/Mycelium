

#include "lapis_ore_block.h"

LapisOreBlock::LapisOreBlock() = default;
LapisOreBlock::~LapisOreBlock() = default;

short LapisOreBlock::getId() const {
  return 461;
}

std::shared_ptr<Block> LapisOreBlock::clone() const {
  std::shared_ptr<LapisOreBlock> copy = std::make_shared<LapisOreBlock>();
  return copy;
}
