

#include "coal_ore_block.h"

CoalOreBlock::CoalOreBlock() = default;
CoalOreBlock::~CoalOreBlock() = default;

short CoalOreBlock::getId() const {
  return 114;
}

std::shared_ptr<Block> CoalOreBlock::clone() const {
  std::shared_ptr<CoalOreBlock> copy = std::make_shared<CoalOreBlock>();
  return copy;
}
