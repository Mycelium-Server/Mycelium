

#include "emerald_block_block.h"

EmeraldBlockBlock::EmeraldBlockBlock() = default;
EmeraldBlockBlock::~EmeraldBlockBlock() = default;

short EmeraldBlockBlock::getId() const {
  return 5995;
}

std::shared_ptr<Block> EmeraldBlockBlock::clone() const {
  std::shared_ptr<EmeraldBlockBlock> copy = std::make_shared<EmeraldBlockBlock>();
  return copy;
}
