

#include "deepslate_lapis_ore_block.h"

DeepslateLapisOreBlock::DeepslateLapisOreBlock() = default;
DeepslateLapisOreBlock::~DeepslateLapisOreBlock() = default;

short DeepslateLapisOreBlock::getId() const {
  return 462;
}

std::shared_ptr<Block> DeepslateLapisOreBlock::clone() const {
  std::shared_ptr<DeepslateLapisOreBlock> copy = std::make_shared<DeepslateLapisOreBlock>();
  return copy;
}
