

#include "emerald_ore_block.h"

EmeraldOreBlock::EmeraldOreBlock() = default;
EmeraldOreBlock::~EmeraldOreBlock() = default;

short EmeraldOreBlock::getId() const {
  return 5841;
}

std::shared_ptr<Block> EmeraldOreBlock::clone() const {
  std::shared_ptr<EmeraldOreBlock> copy = std::make_shared<EmeraldOreBlock>();
  return copy;
}
